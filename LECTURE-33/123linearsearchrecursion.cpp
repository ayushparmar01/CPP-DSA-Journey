// linear search using recursion

#include<iostream>
using namespace std;



bool getSearch(int arr[], int k, int size) {

    if(size == 0)
        return false;

    if(arr[0] == k) 
        return true;
    else {
        bool remainingPart = getSearch(arr + 1, k,  size - 1);
        return remainingPart;
    }   
}
int main() {

    int arr[5] = {4,2,1,6,8};
    int size = 5;
    int key = 9;
    bool ans = getSearch(arr, key, size);

    
    if(ans) {
        cout << "key is found" << endl;
    }
    else {
        cout << "key if not found" << endl;
    }
    
    return 0;
}