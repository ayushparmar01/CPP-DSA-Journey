#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter the number: " << endl;
cin >> n;
int i=2;
while(i<n){
    if(n%i!=0){
        cout << "prime number" << endl;
    }
    else{
        cout << "Not prime number" << endl;
    }
        
        break;
}
}