# frozen_string_literal: true

source "https://rubygems.org"

gemspec

if File.directory?(File.expand_path("../protocol-media", __dir__))
	gem "protocol-media", path: "../protocol-media"
else
	gem "protocol-media", git: "https://github.com/socketry/protocol-media.git", branch: "protocol-media-interface"
end

group :maintenance, optional: true do
	gem "bake-modernize"
	gem "bake-gem"
	gem "bake-releases"
	gem "mime-types-data"
end

group :test do
	gem "covered"
	gem "sus"
	gem "decode"
	
	gem "bake-test"
end
