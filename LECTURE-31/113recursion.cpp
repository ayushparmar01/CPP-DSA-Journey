#include<iostream>
using namespace std;

int factorial(int n) {

    // Base case
    if(n == 0) 
        return 1;
    
    // recursive relation
     return n * factorial(n-1);   
}
int main() {

    int n;
    
    cout << "Enter the number: " ;
    cin >> n;

    int ans = factorial(n);
    cout << "factorial of number is: " << ans << endl;
    return 0;
}