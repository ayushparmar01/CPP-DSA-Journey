// put element at bottom of stack
#include <iostream>
#include <stack>
using namespace std;

void putAtBottom(stack<int>& s, int element) {
    // if the stack is empty, push the element onto the stack
    if(s.empty()) {
        s.push(element);
        return;
    }
    // if the stack is not empty, pop the top element and call the function recursively
    int topElement = s.top();
    s.pop();
    putAtBottom(s, element);
    // after the recursive call, push the top element back onto the stack
    s.push(topElement);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    putAtBottom(s, 4);
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}