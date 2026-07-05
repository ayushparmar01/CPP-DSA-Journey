// In stack work on the principal of LIFO(last in first out)
// shaddi me plate ka system
#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("Ayush");
    s.push("Thakur");
    s.push("parmar");

    cout<< "Top element -> " << s.top()<<endl;

    s.pop();
    cout<< "Top element -> " << s.top()<<endl;

    cout<<"size of stack"<<s.size()<< endl;

    cout << "Empty or not " << s.empty() << endl;
}