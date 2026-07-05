#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;

    for(int i=1; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;


    return 0;
}