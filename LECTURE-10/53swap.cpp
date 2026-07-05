#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapArray(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1 < size){
         swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
int odd[5] = {1, 2, 5, 6, 7};
int even[4] = {34,56,23,14};
   
swapArray(odd, 5);
printArray(odd, 5);

cout << endl;

    swapArray(even, 4);
    printArray(even, 4);

    return 0;
}