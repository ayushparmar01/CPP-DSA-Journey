#include<iostream>
using namespace std;

void print(int n) {

    // Base case
    if(n == 0) 
        return;

    print(n - 1);   // recursive call
    cout << n << " ";  // print after recursion
}

int main() {

    int n;
    cout << "Enter the number: ";
    
    cin >> n;

    print(n);
    return 0;
}