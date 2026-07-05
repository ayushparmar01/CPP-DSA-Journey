#include<iostream>
using namespace std;

int power(int a, int b) {

    // base case
    if( b == 0)
        return 1;

    // if( b == 1)
    //     return 1;

    int half = power(a, b/2);

    // Recursive Call

    if(b % 2 == 0) {
        return half * half;
    }    
    else {
        return a * half * half;
    }
}
int main() {

    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    int ans = power(a, b);

    cout << "Power of a is b: " << ans << endl;
    return 0;
}