#include<iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size){
        cout << endl << "printing the array" << endl;
    // print the array
    for(int i=0; i<=size; i++){
         cout << arr[i] << " ";
    }
     cout <<  "printing is done" << endl;
}
int main(){

    int third[15] = {2, 7};
    int n = 15;
    printArray(third, 15);

    // int fourth[10] = {0};

    // n=10;
    // printArray(fourth, 15);

    
    int fifth[10] = {1};

    n=10;
    printArray(fifth, 15);

    // how to find size of an array
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth is " << fifthSize << endl;

    cout << endl << "Everything is fine " << endl << endl;
    
    return 0;
}