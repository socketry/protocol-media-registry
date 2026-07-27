# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

require "protocol/media/type"

require_relative "data/version"
require_relative "data/index"

module Protocol
	module Media
		# Provides indexed access to registered media type data.
		module Data
			# Look up a media type by name.
			#
			# @parameter name [String] The complete media type name.
			# @returns [Protocol::Media::Type | Nil]
			def self.[](name)
				if record = Index.lookup(name)
					Type.parse(record[0], encoding: record[1], extensions: record[2])
				end
			end
			
			# Look up a media type by filename extension.
			#
			# @parameter extension [String] A filename extension, with or without a leading dot.
			# @returns [Protocol::Media::Type | Nil]
			def self.for_extension(extension)
				extension = extension.delete_prefix(".").downcase
				
				if name = Index.lookup_extension(extension)
					self[name]
				end
			end
			
			# Look up a media type for a path.
			#
			# @parameter path [String] A path containing a filename extension.
			# @returns [Protocol::Media::Type | Nil]
			def self.for_path(path)
				extension = File.extname(path)
				for_extension(extension) unless extension.empty?
			end
		end
	end
end
