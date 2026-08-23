#include<iostream>
#include<stack>
using namespace std;

void putAtBottom(stack<int>& s, int element) {
    if(s.empty()) {
        s.push(element);
        return;
    }
    int topElement = s.top();
    s.pop();
    putAtBottom(s, element);
    s.push(topElement);
}

void reverseStack(stack<int>& s) {
    if(!s.empty()) {
        int topElement = s.top();
        s.pop();
        reverseStack(s);
        putAtBottom(s, topElement);
    }
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);
    cout << "Reversed stack: ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();

        
    }
    return 0;
}