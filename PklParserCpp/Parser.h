#pragma once
#include <string>
#include <variant>
#include "Tokenizer.h"

using valueTypes = std::variant<
	std::variant<long, double>,
	bool,
	std::string
>;

using numberVariants = std::variant<long, double>;

class Number;
class Boolean;
class String;

// TODO:
//class Duration;
//class DataSize;
//class Object;
//class Listing;
//class Mapping;
//class Class;
//class Method;
// etc...

class PklValue
{

public:
	enum class PklType {
		Number,
		Boolean,
		String,
		//Duration,
		//DataSize,
		//Object,
		//Listing,
		//Mapping,
		//Class,
		//Method,
		/// etc...
		Null,
	};

	static Number Number(numberVariants val);
	static Boolean Boolean(bool val);
	static String String(const std::string& val);

private:
	PklType type;
	valueTypes value;
	
	PklValue(PklType type, valueTypes value) : type(type), value(value) {}
};

class Parser
{
private:
	const std::string& input;
public:
	void parse(const std::string& input);
};

