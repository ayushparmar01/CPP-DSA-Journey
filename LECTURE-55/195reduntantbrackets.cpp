#include<iostream>
#include<stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == ')') {
            char top = st.top();
            st.pop();

            bool isRedundant = true;

            while (top != '(') {
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isRedundant = false;
                }
                top = st.top();
                st.pop();
            }

            if (isRedundant) {
                cout << "true" << endl;
                return 0;
            }
        } else {
            st.push(ch);
        }
    }

    cout << "false" << endl;
    return 0;
}