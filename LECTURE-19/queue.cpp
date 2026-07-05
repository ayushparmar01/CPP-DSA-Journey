// jo line me pehele lagta hai uski bari pehele aati hai
// In queue work on the principal of FIFO(Fast in first out)

#include<iostream>
#include<queue>

using namespace std;
int main(){

    queue<string> q;

    q.push("Ayush");
    q.push("Thakur");
    q.push("Parmar");

    cout<<"size of queue before: "<<q.size()<< endl;

    cout << "First element is:" << q.front()<<endl;
    q.pop();

    cout << "First element is:" << q.front()<<endl;

    cout<<"size of queue after: "<<q.size()<< endl;


}