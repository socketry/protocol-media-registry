# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2016-2026, by Samuel Williams.

begin
	require "protocol/media/data/native"
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
