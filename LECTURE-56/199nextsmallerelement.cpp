#include<iostream>
#include<stack>
using namespace std;
int nextsmallerelement(int *arr, int n) {
    stack<int> s;
    int ans[n];
    for (int i = n - 1; i >= 0; i--) {
       int curr = arr[i];
       while(s.top() >= curr) {
        s.pop();

       }
    //    ans stack ka top hai
    ans[i] = s.top();
    s.push(curr);
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    int arr[] = {10, 20, 30, 40};
    nextsmallerrelement(arr, 3);

    cout << endl;
    cout << "Stack elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
        cout << "final stack size: " << nextsmallerrelement() << endl;
    

}