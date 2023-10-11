#include <iostream>
#include <string>

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '>' || ch == '<' ||
            ch == '=');
}

int main() {
    std::string str;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, str); 

    for (char ch : str) {
        if (isOperator(ch)) {
            std::cout << "'" << ch << "' IS AN OPERATOR" << std::endl;
        }
    }

    return 0;
}
