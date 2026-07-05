#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: "<< " ";
    cin >> n;
    int i=1, s=0;
    while(i<=n){
         
        s=s+i;
       
        i=i+1;
        
    }
    cout<< "Result: " << s << " ";
}