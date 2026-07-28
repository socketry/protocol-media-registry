# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

# Build the native extension.
def build
	ext_path = File.expand_path("ext", __dir__)
	
	Dir.chdir(ext_path) do
		system("ruby ./extconf.rb") or raise "extconf.rb failed"
		
		if File.exist?("Makefile")
			system("make") or raise "make failed"
		end
	end
end

# Clean the native extension.
def clean
	ext_path = File.expand_path("ext", __dir__)
	
	Dir.chdir(ext_path) do
		system("make clean") if File.exist?("Makefile")
	end
end

# Build the native extension before running tests.
def before_test
	self.build
end

# Regenerate the static media type indexes.
def generate
	require_relative "tasks/generator"
	
	Protocol::Media::Registry::Generator.load(__dir__).generate
end

# Create a GitHub release for the given tag.
#
# @parameter tag [String] The tag to create a release for.
def after_gem_release(tag:, **options)
	context["releases:github:release"].call(tag)
end
