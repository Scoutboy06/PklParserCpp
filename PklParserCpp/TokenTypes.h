#pragma once

#include <variant>
#include <string>


enum class PklType
{
	Number,
	Boolean,
	String,
	Duration,
	DataSize,
	Object,
	Listing,
	Mapping,
	Class,
	Method,
	Annotation,
	Null,
};

enum class Number
{
	Int, // 64-bit
	Float, // 64-bit
	NaN,
	Infinity,
	NegInfinity,
};

struct PklValue
{
	PklType type;
	std::variant<bool, std::variant<long, double>, std::string> value;

	PklValue(bool val) : type(PklType::Boolean), value(val) {}
	PklValue(std::variant<long, double> val) : type(PklType::Number), value(val) {}
	//PklValue()

	//PklValue(double val) : type(PklType::Number), value(val) {}
};


