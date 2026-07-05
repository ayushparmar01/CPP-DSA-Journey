#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
 for(int i = 0; i < n-1; i++){
       int minIndex = i;

       for(int j = i+1; j < n; j++){

           if(arr[j] < arr[minIndex])
            minIndex = j;
       }
       swap(arr[minIndex], arr[i]);
   }
}

int main(){
    int arr[7] = {8,3,4,2,1,9,7};

    selectionSort(arr, 7);

    cout << "Final sorted array is: ";
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

// coding ninjas selection sort. 

// void selectionSort(vector<int>& arr, int n)
// {   
//    for(int i = 0; i < n-1; i++){
//        int minIndex = i;

//        for(int j = i+1; j < n; j++){

//            if(arr[j] < arr[minIndex])
//             minIndex = j;
//        }
//        swap(arr[minIndex], arr[i]);
//    }
// }
