//  rotated array

#include<iostream>
using namespace std;

void rotatedArray(int arr[], int n, int k){
int temp[n];
    for(int i = 0; i < n; i++){
         temp[(i+k) % n] = arr[i];

    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
    for(int i=0; i<n; i++){
         cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int k = 3;

    rotatedArray(arr, 7, 3);
    return 0;
}
