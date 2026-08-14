#include<iostream>
#include<stack>
using namespace std;
int main() {
    string str = "((a+b)*(c-d))";
    stack<char> s;
    bool isValid = true;

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];

        // if the character is an opening bracket, push it onto the stack
        if(ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // if the character is a closing bracket, check if the stack is empty or if the top of the stack is not the matching opening bracket
        else if(ch == ')' || ch == '}' || ch == ']') {
            if(s.empty()) {
                isValid = false;
                break;
            }
            char topChar = s.top();
            s.pop();
            if((ch == ')' && topChar != '(') || (ch == '}' && topChar != '{') || (ch == ']' && topChar != '[')) {
                isValid = false;
                break;
            }
        }
    }

    // if the stack is not empty, then there are unmatched opening brackets
    if(!s.empty()) {
        isValid = false;
    }

    if(isValid) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are not valid." << endl;
    }

    return 0;
}