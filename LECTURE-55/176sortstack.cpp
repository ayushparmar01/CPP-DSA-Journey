#include<iostream>
#include<stack>
using namespace std;

void sortStack(stack<int>& s) {
    stack<int> sortedStack;
    while(!s.empty()) {
        int topElement = s.top();
        s.pop();

        while(!sortedStack.empty() && sortedStack.top() > topElement) {
            s.push(sortedStack.top());
            sortedStack.pop();
        }
        sortedStack.push(topElement);
    }
    // transfer the sorted elements back to the original stack
    while(!sortedStack.empty()) {
        s.push(sortedStack.top());
        sortedStack.pop();
    }
}
int main() {
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);

    stack<int> sortedStack;
    while(!s.empty()) {
        int topElement = s.top();
        s.pop();

        while(!sortedStack.empty() && sortedStack.top() > topElement) {
            s.push(sortedStack.top());
            sortedStack.pop();
        }
        sortedStack.push(topElement);
    }
    // print the sorted stack
    while(!sortedStack.empty()) {
        cout << sortedStack.top() << " ";
        sortedStack.pop();
    }
    return 0;
}