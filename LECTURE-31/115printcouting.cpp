#include<iostream>
using namespace std;

int counting(int n) {

    // Base case
    if(n == 0) 
        return 1;
    
    // recursive relation
    for(int i=n; i>0; i--) {
        cout << i << endl;
           
    }
    return counting(n-1);
     
}

int main() {

    int n;
    cout << "Enter the number: ";
    
    cin >> n;

    int ans = counting(n);
    cout << "counting of number is: " << ans << endl;
    return 0;
}