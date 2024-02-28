#include "Parser.h"

class Number
{
public:
	explicit Number(numberVariants val) : value(val) {}
private:
	numberVariants value;
};

class Boolean
{
public:
	explicit Boolean(bool val) : value(val) {}
private:
	bool value;
};

class String
{
public:
	explicit String(const std::string& val) : value(val) {}
private:
	const std::string& value;
};


// Implement static member functions for PklValue
Number PklValue::Number(numberVariants val) { return Number(val); }

Boolean PklValue::Boolean(bool val) { return Boolean(val); }

String PklValue::String(const std::string& val) { return String(val); }



void Parser::parse(const std::string& input)
{
	Tokenizer tokenizer(input);
}