# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

require_relative "records"

module Protocol
	module Media
		module Data
			# Pure Ruby media type index.
			module Ruby
				# Look up the raw record for a media type name.
				def self.lookup(name)
					RECORDS[name]
				end
				
				# Look up a media type name by filename extension.
				def self.lookup_extension(extension)
					EXTENSIONS[extension]
				end
			end
		end
	end
end
