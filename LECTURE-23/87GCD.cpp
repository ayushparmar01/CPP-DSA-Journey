// formula of the gcd

// gcd(a,b) = gcd(a-b,b) = gcd(a%b, b)

#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0) 
        return b;

    if(b==0)
        return a;
    
    while(a != b) {

        if(a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
     }  
     return a; 
}
int main(){
    int a,b;
    cout << "Enter the two number: ";
    cin >> a >> b;

    int ans = gcd(a, b);

    cout << a << "The GCD of the two number is: " << b << endl;
    return 0;
}