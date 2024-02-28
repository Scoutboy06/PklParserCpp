#pragma once

#include <variant>
#include <string>


enum class PklType {
	Boolean,
	Number,
	String,
	Duration,
	DataSize,
	Dynamic,
	Listing,
	Mapping,
	Class,
	Method,
	Annotation,
	Null,
};

enum class Number {
	Int, // 64-bit
	Float, // 64-bit
	NaN,
	Infinity,
	NegInfinity,
};

struct PklValue {
	PklType type;
	std::variant<bool, std::variant<int, float>, std::string> value;

	PklValue(bool val) : type(PklType::Boolean), value(val) {}
	PklValue(int val) : type(PklType::Number), value(val) {}
};