#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    cout << "a&b: "  << (a&b) << endl;  // AND operator
    cout << "a|b: "  << (a|b) << endl;  // OR operator
    cout << "~a: "  << (~a) << endl;    // NOT operator
    cout << "a^b: " << (a^b) << endl;   // XOR operator
        
    cout<< (17>>1)<<endl;               // LEFT shift
    cout<< (17>>2)<<endl;               // LEFT shift
    cout<< (19<<1)<<endl;               // RIGHT shift
    cout<< (21<<2)<<endl;               // RIGHT shift

    int i = 7;

    cout << (++i)<<endl; // 8                      // pre increment
    cout << (i++)<<endl; // 8, i = 9               // post increment
    cout << (i--)<<endl; // 9, i = 8               // pre decrement
    cout << (--i)<<endl; // 7, i = 7               // post decrement
}



