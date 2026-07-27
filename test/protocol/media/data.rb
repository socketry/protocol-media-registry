# frozen_string_literal: true

require "protocol/media/data"

describe Protocol::Media::Data do
	it "looks up a media type by name" do
		type = subject["application/json"]
		
		expect(type).to be_a(Protocol::Media::Type)
		expect(type.name).to be == "application/json"
		expect(type.extensions).to be(:include?, "json")
	end
	
	it "looks up a media type by extension" do
		type = subject.for_extension(".html")
		
		expect(type.name).to be == "text/html"
	end
	
	it "prefers the highest priority type for an extension" do
		type = subject.for_extension("xls")
		
		expect(type.name).to be == "application/vnd.ms-excel"
	end
	
	it "looks up a media type by path" do
		type = subject.for_path("public/index.HTML")
		
		expect(type.name).to be == "text/html"
	end
	
	it "returns nil for unknown media types" do
		expect(subject["application/x-does-not-exist"]).to be_nil
		expect(subject.for_extension("does-not-exist")).to be_nil
	end
end
