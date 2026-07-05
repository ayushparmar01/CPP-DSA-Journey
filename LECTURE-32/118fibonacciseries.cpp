#include<iostream>
using namespace std;

int fibnacci(int n) {

    if(n == 0)
    return 0;

    if(n==1)
    return 1;

return fibnacci(n-1) + fibnacci(n-2);    
}

int main() {

    int n;
    cout << "enter the num: " << endl;
    cin >> n;

    int ans = fibnacci(n);

    cout << "fibonacci series is: " << ans << endl;
    return  0;
}