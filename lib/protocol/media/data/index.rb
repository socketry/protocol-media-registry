# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

begin
	require "Protocol_Media_Data"
rescue LoadError
	require_relative "ruby"
	
	module Protocol
		module Media
			module Data
				Index = Ruby
			end
		end
	end
else
	module Protocol
		module Media
			module Data
				Index = Native
			end
		end
	end
end
