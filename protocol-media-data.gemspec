# frozen_string_literal: true

require_relative "lib/protocol/media/data/version"

Gem::Specification.new do |spec|
	spec.name = "protocol-media-data"
	spec.version = Protocol::Media::Data::VERSION
	
	spec.summary = "Provides indexed media type registry data."
	spec.authors = ["Samuel Williams"]
	spec.license = "MIT"
	
	spec.homepage = "https://github.com/socketry/protocol-media-data"
	
	spec.metadata = {
		"documentation_uri" => "https://socketry.github.io/protocol-media-data/",
		"source_code_uri" => "https://github.com/socketry/protocol-media-data.git",
	}
	
	spec.files = Dir.glob(["{ext,lib}/**/*", "*.md"], File::FNM_DOTMATCH, base: __dir__)
	spec.require_paths = ["lib"]
	
	spec.extensions = ["ext/protocol/media/data/extconf.rb"]
	
	spec.required_ruby_version = ">= 3.3"
	
	spec.add_dependency "protocol-media", "~> 0.1"
end
