#!/usr/bin/env ruby
# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

return if RUBY_DESCRIPTION =~ /jruby/

require "mkmf"

extension_name = "Protocol_Media_Registry"

append_cflags(["-Wall", "-Wno-unknown-pragmas", "-std=c99"])

if ENV.key?("RUBY_DEBUG")
	$stderr.puts "Enabling debug mode..."
	
	append_cflags(["-DRUBY_DEBUG", "-O0"])
end

$srcs = ["protocol/media/registry/native.c"]
$VPATH << "$(srcdir)/protocol/media/registry"

if ENV.key?("RUBY_SANITIZE")
	$stderr.puts "Enabling sanitizers..."
	
	append_cflags(["-fsanitize=address", "-fsanitize=undefined", "-fno-omit-frame-pointer"])
	$LDFLAGS << " -fsanitize=address -fsanitize=undefined"
end

create_header
create_makefile(extension_name)
