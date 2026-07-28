// Released under the MIT License.
// Copyright, 2026, by Samuel Williams.

#include <ruby.h>

#include "extensions.h"
#include "records.h"

static VALUE Protocol_Media_Data_lookup(VALUE _self, VALUE name)
{
	StringValue(name);
	
	const struct MediaTypeRecord *record = lookup_record(RSTRING_PTR(name), (unsigned int)RSTRING_LEN(name));
	if (!record) return Qnil;
	
	VALUE result = rb_ary_new_capa(3);
	rb_ary_push(result, rb_str_new_cstr(record->name));
	rb_ary_push(result, record->encoding ? rb_str_new_cstr(record->encoding) : Qnil);
	
	if (record->extensions) {
		rb_ary_push(result, rb_str_split(rb_str_new_cstr(record->extensions), " "));
	} else {
		rb_ary_push(result, Qnil);
	}
	
	return result;
}

static VALUE Protocol_Media_Data_lookup_extension(VALUE _self, VALUE extension)
{
	StringValue(extension);
	
	const struct ExtensionRecord *record = lookup_extension(RSTRING_PTR(extension), (unsigned int)RSTRING_LEN(extension));
	if (!record) return Qnil;
	
	return rb_str_new_cstr(record->name);
}

void Init_Protocol_Media_Data(void)
{
	VALUE protocol = rb_define_module("Protocol");
	VALUE media = rb_define_module_under(protocol, "Media");
	VALUE data = rb_define_module_under(media, "Data");
	VALUE native = rb_define_module_under(data, "Native");
	
	rb_define_singleton_method(native, "lookup", Protocol_Media_Data_lookup, 1);
	rb_define_singleton_method(native, "lookup_extension", Protocol_Media_Data_lookup_extension, 1);
}
