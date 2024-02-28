#pragma once
#include <string>
#include "Tokenizer.h"

class Parser
{
private:
	const std::string& input;
public:
	void parse(const std::string& input);
};

