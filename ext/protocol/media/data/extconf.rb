# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

require "mkmf"

if RUBY_ENGINE == "ruby" && have_header("ruby.h")
	create_makefile("protocol/media/data/native")
else
	File.write("Makefile", dummy_makefile($srcdir).join)
end
