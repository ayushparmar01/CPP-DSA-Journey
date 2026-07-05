#include<iostream>
using namespace std;

int powerOftwo(int n) {

    // Base case
    if(n == 0) 
        return 1;
    
    // recursive relation
     return 2 * powerOftwo(n-1);   
}
int main() {

    int n;
    cout << "Enter the power: ";
    
    cin >> n;

    int ans = powerOftwo(n);
    cout << "power of number is: " << ans << endl;
    return 0;
}