#include <iostream>
#include <stack>
#include <string>
bool areParenthesesBalanced(const std::string& str) {
    std::stack<char> stack;
    for (char ch : str) {
        if (ch == '(') {
            stack.push(ch);
        } else if (ch == ')') {
            if (stack.empty() || stack.top() != '(') {
                return false;
           }
            stack.pop();
        }
    }
    return stack.empty();
}
int main() {
    std::string input ;
    std::cout<<"ENter";
    std::cin>>input;
    if (areParenthesesBalanced(input)) {
        std::cout << "The parentheses are balanced." << std::endl;
    } else {
        std::cout << "The parentheses are not balanced." << std::endl;
    }
    return 0;
}

