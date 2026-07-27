# frozen_string_literal: true

require "mkmf"

if RUBY_ENGINE == "ruby" && have_header("ruby.h")
	create_makefile("protocol/media/data/native")
else
	File.write("Makefile", dummy_makefile($srcdir).join)
end
