#include <iostream>
#include <stack>
#include <string>
using namespace std;
void reverseString(string& str) {
    stack<char> charStack;
    for (char c : str) {
        charStack.push(c);
    }
    for (int i = 0; i < str.length(); i++) {
        str[i] = charStack.top();
        charStack.pop();
    }
}
int main() {
    string str = "GeeksQuiz";
    cout << "Original String: " << str << endl;
    reverseString(str);
    cout << "Reversed String: " << str << endl;
    return 0;
}

