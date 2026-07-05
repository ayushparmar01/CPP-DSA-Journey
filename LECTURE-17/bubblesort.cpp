#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[5] = {8,3,24,2,1};

    bubblesort(arr, 5);

    cout << "Final sorted array is: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}


// CODING NINJAS

// void bubbleSort(vector<int>& arr, int n)
// {   
//     for(int i = 0; i < n; i++){
//         // process element till n-1 th index
//         for(int j = 0; j < n-i; j++){

//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1])
//                 swapped = true;
//             }
//         }
//         if(swapped == false){
//             // already sort
//             break;
//         }
//     }
// }
