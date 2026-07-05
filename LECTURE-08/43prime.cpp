#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return 0;   // numbers <= 1 are not prime

    for(int i = 2; i * i <= n; i++){   // check up to sqrt(n)
        if(n % i == 0){
            return 0;   // not prime
        }
    }
    return 1;   // prime
}
 
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(isPrime(n)){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
    }
    
    return 0;
}
