# frozen_string_literal: true

require "protocol/media/data/ruby"

describe Protocol::Media::Data::Ruby do
	it "looks up raw records" do
		record = subject.lookup("text/plain")
		
		expect(record[2]).to be(:include?, "txt")
	end
	
	it "looks up extensions" do
		expect(subject.lookup_extension("json")).to be == "application/json"
	end
end
