// couting form 1 to n

#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter the value of n: " ;
    cin >> n;
    int sum=0;
    int i=1;
    for(i=1; i<=n;i++){
        // sum = sum + i;
        sum += i;  
    }
    cout << "the sum of the given value is: "<< sum << endl;
}