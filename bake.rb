# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

# Regenerate the static media type indexes.
def generate
	require_relative "tasks/generator"
	
	Protocol::Media::Data::Generator.load(__dir__).generate
end

# Create a GitHub release for the given tag.
#
# @parameter tag [String] The tag to create a release for.
def after_gem_release(tag:, **options)
	context["releases:github:release"].call(tag)
end
