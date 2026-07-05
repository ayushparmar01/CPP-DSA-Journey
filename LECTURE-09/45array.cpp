#include<iostream>
using namespace std;

// HOLD
void printArray(){

}
int main(){

    // declare
    int number[15];

    // accessing an array
    cout << "value of 15 index is " << number[14] << endl;

    // cout << "value of 19 index is " << number[20] << endl;

    // initialising an array
    int second[3] = {3, 7, 11};

    // accessing of an element
    cout << "value of 2 index is " << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    cout << "Printing the array " << endl;
    // print the array
    for(int i=0; i<=n; i++){
        cout << third[i] << " ";
    }

    int fourth[10] = {0};

    n=10;
    cout << endl << "printing the array" << endl;
    // print the array
    for(int i=0; i<=n; i++){
         cout << fourth[i] << " ";
    }

    // initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};

    n=10;
    cout << endl << "printing the array" << endl;
    // print the array
    for(int i=0; i<=n; i++){
         cout << fifth[i] << " ";
    }

    cout << endl << "Everything is fine " << endl << endl;
    
    return 0;
}