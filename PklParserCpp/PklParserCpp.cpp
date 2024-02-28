// Website: https://pkl-lang.org/
// GitHub: https://github.com/apple/pkl
// Language Reference: https://pkl-lang.org/main/current/language-reference/index.html

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream file("C:\\Users\\elias.hakanssonwenn\\Desktop\\coding\\PklParserCpp\\bird.pkl");
	
	if (!file.is_open()) {
		std::cout << "Unable to open file" << std::endl;
		return 1;
	}

	std::string line;
	
	while (getline(file, line)) {
		std::cout << line << std::endl;
	}

	file.close();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
