# frozen_string_literal: true

# Released under the MIT License.
# Copyright, 2026, by Samuel Williams.

require "protocol/media/registry"

describe Protocol::Media::Registry do
	if RUBY_ENGINE == "ruby"
		it "uses the native index" do
			expect(Protocol::Media::Registry::Index).to be == Protocol::Media::Registry::Native
		end
	end
	
	it "falls back to the Ruby index" do
		registry = Module.new
		media = Module.new
		protocol = Module.new
		fallback = Module.new
		
		registry.const_set(:Fallback, fallback)
		media.const_set(:Registry, registry)
		protocol.const_set(:Media, media)
		
		scope = Module.new
		scope.const_set(:Protocol, protocol)
		scope.define_singleton_method(:require){|name| raise LoadError, name}
		scope.define_singleton_method(:require_relative){|name|}
		
		path = File.expand_path("../../../lib/protocol/media/registry/index.rb", __dir__)
		scope.module_eval(File.read(path), path)
		
		expect(registry::Index).to be == fallback
	end
	
	it "looks up a media type by name" do
		record = subject["application/json"]
		
		expect(record).to be_a(Protocol::Media::Registry::Record)
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
	
	it "prefers a type's preferred extension" do
		expect(subject.for_extension("webm").type.name).to be == "video/webm"
		expect(subject.for_extension("weba").type.name).to be == "audio/webm"
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
