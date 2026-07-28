# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

module Protocol
	module Media
		module Registry
			# A media type and its associated registry metadata.
			class Record
				# @attribute [Protocol::Media::Type] The media type.
				attr_reader :type
				
				# @attribute [String | Nil] The conventional transfer encoding.
				attr_reader :encoding
				
				# @attribute [Array(String) | Nil] Known filename extensions.
				attr_reader :extensions
				
				# @parameter type [Protocol::Media::Type] The media type.
				# @parameter encoding [String | Nil] The conventional transfer encoding.
				# @parameter extensions [Array(String) | Nil] Known filename extensions.
				def initialize(type, encoding: nil, extensions: nil)
					@type = type
					@encoding = encoding
					@extensions = extensions
				end
			end
		end
	end
end
