#include<iostream>
using namespace std;

void Insertionsort(int arr[], int n){

    for(int i = 0; i < n; i++){
        int temp  = arr[i];
        int j = i-1;
        for(; j >=0; j--){

            if(arr[j] > temp){
                // shift
                arr[j+1] = arr[j];
            }
            else{ // ruk jaoo
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[6] = {1,4,5,3,6,9};

    Insertionsort(arr, 6);
    cout << "Final sorted array is: ";
    for(int i=0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

