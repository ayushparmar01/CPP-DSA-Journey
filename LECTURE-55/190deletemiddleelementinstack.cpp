#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int> &s, int count, int size) {

    // base case: if the count is equal to half of the size of the stack, pop the middle element and return
    if(count == size/2) {
        s.pop();
        return;
    }

    // store the top element and pop it
    int num = s.top();
    s.pop();

    // count the number of elements popped and call the function recursively
    count++;

    // call the function recursively
    solve(s, count, size);
    s.push(num);
}

int main() {
    int count = 0;
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    solve(s, count, s.size());

    cout << "After deleting middle element, the stack is: ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}