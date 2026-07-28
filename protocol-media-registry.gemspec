# frozen_string_literal: true

require_relative "lib/protocol/media/registry/version"

Gem::Specification.new do |spec|
	spec.name = "protocol-media-registry"
	spec.version = Protocol::Media::Registry::VERSION
	
	spec.summary = "Provides indexed media type registry data."
	spec.authors = ["Samuel Williams"]
	spec.license = "MIT"
	
	spec.homepage = "https://github.com/socketry/protocol-media-registry"
	
	spec.metadata = {
		"documentation_uri" => "https://socketry.github.io/protocol-media-registry/",
		"source_code_uri" => "https://github.com/socketry/protocol-media-registry.git",
	}
	
	spec.files = Dir.glob(["{ext,lib}/**/*", "*.md"], File::FNM_DOTMATCH, base: __dir__)
	spec.require_paths = ["lib"]
	
	spec.extensions = ["ext/extconf.rb"]
	
	spec.required_ruby_version = ">= 3.3"
	
	spec.add_dependency "protocol-media", "~> 0.0"
end
