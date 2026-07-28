# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

require "protocol/media/registry/fallback"

describe Protocol::Media::Registry::Fallback do
	it "looks up raw records" do
		record = subject.lookup("text/plain")
		
		expect(record[2]).to be(:include?, "txt")
	end
	
	it "looks up extensions" do
		expect(subject.lookup_extension("json")).to be == "application/json"
	end
end
