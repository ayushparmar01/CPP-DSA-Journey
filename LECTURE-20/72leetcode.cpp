// remove duplicate element

#include<iostream>
using namespace std;

void removeduplicate(int arr[], int n){
int j=0;
     for(int i = 1; i < n; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
            
        }
    }
        for(int i = 0; i <= j; i++){
        cout<< arr[i] << endl;
    }
}
int main(){

    int arr[] = {0, 0, 1, 1, 2, 3, 3};
    removeduplicate(arr, 7);


}