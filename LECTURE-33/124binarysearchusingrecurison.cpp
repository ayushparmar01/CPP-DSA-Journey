// Binary search using recursion

#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k) {
    // base case

    // element not found
    if(s > e)
        return false;

    int mid = s + (e-s) / 2;

    if(arr[mid] == k)
        return true;  
        


    if(arr[mid] < 2) {
        return binarySearch(arr, mid+1, e, k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}
int main() {

    int arr[5] = {4,2,1,6,8};
    int size = 5;
    int key = 8;


    cout << "present or not " << binarySearch(arr, 0, 5, key) << endl;
    
    return 0;
}