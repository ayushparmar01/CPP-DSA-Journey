// Binary search using recursion

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1])
        return false;

    else {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }    


}
int main() {

    // int arr[5] = {4,2,1,6,8};
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int ans = isSorted(arr, size);

    if(ans) {
        cout << "array is sorted" << endl;
    }
    else {
        cout << "array is not sorted" << endl;
    }
    
    return 0;
}