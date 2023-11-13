#include <iostream>
#include <string>

bool isOperator(char ch) {
    return (ch == '<' || ch == '>' || ch == '=' || ch == '<=' || ch == '!' || ch == '=');
}

int main() {
    std::string expression;
    
    std::cout << "Enter an expression: ";
    std::getline(std::cin, expression);

    for (char ch : expression) {
        if (isOperator(ch)) {
            if (ch == '<') {
                std::cout << "'<'" << " is less than" << std::endl;
            } else if (ch == '>') {
                std::cout << "'>'" << " is greater than" << std::endl;
            } else if (ch == '==') {
                std::cout << "'=='" << " is equal to" << std::endl;
            }else if (ch == '<=') {
                std::cout << "'<='" << " is equal to" << std::endl;
            }else if (ch == '>=') {
                std::cout << "'>='" << " is equal to" << std::endl;
            }else if (ch == '!=') {
                std::cout << "'!='" << " is equal to" << std::endl;
            }
        }
    }

    return 0;
}
