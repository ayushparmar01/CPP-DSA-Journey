// Binary search using recursion

#include<iostream>
using namespace std;

int getSum(int arr[], int size) {

    if(size == 1)
        return arr[0];

    int ans = getSum(arr + 1, size - 1);
    return arr[0] + ans;    
}
int main() {

    int arr[5] = {4,2,1,6,8};
    int size = 5;
    int ans = getSum(arr, size);

    cout << ans;
    
    return 0;
}