# frozen_string_literal: true

source "https://rubygems.org"

gemspec

gem "protocol-media", path: "../protocol-media"

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
