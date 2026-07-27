# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

require "protocol/media/data"

describe Protocol::Media::Data do
	it "looks up a media type by name" do
		record = subject["application/json"]
		
		expect(record).to be_a(Protocol::Media::Data::Record)
		expect(record.type).to be_a(Protocol::Media::Type)
		expect(record.type.name).to be == "application/json"
		expect(record.extensions).to be(:include?, "json")
	end
	
	it "looks up a media type by extension" do
		record = subject.for_extension(".html")
		
		expect(record.type.name).to be == "text/html"
	end
	
	it "prefers the highest priority type for an extension" do
		record = subject.for_extension("xls")
		
		expect(record.type.name).to be == "application/vnd.ms-excel"
	end
	
	it "looks up a media type by path" do
		record = subject.for_path("public/index.HTML")
		
		expect(record.type.name).to be == "text/html"
	end
	
	it "returns nil for unknown media types" do
		expect(subject["application/x-does-not-exist"]).to be_nil
		expect(subject.for_extension("does-not-exist")).to be_nil
	end
end
