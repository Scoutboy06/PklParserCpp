#include "Tokenizer.h"


Token Tokenizer::getNextToken()
{
	if (this->cursor >= this->input.length()) {
		return Token::EndOfFile;
	}

	char ch = this->input[this->cursor];

	// Number
	if(isalnum(ch)) {}

	throw std::invalid_argument("Invalid token");
}