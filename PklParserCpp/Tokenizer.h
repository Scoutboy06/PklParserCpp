#pragma once

#include <string>
#include <stdexcept>

enum class Token
{
	EndOfFile
};

class Tokenizer
{
private:
	const std::string& input;
	uint32_t cursor = 0;

public:
	Tokenizer(const std::string& input) : input(input) {}

	Token getNextToken();
};

