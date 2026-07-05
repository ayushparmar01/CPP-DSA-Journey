#include<iostream>
#include<climits>
using namespace std;

// Row wise sum:)

// void printSum(int arr[][3], int row, int col) {
//     cout << "printng sum -> " << endl;
//     for(int row=0; row<3; row++) {
//         int sum = 0;
//         for(int col=0; col<3; col++) {
//             sum += arr[row][col];
//         }
//         cout << sum << " ";
//     }
// }

// Column Wise sum:)

void printSum(int arr[][3], int row, int col) {
    cout << "printng sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int largestRowSum(int arr[][3], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;
     for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        if(sum > maxi) {
            maxi = sum;
            rowIndex = col;
        }
    }
    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

int main() {

    int arr[3][3];
   
    cout << "enter the element " << endl;
    // input the array -> taking input row wise
    for(int row = 0; row<3; row++){
        for(int col = 0; col<3; col++) {
            cin >> arr[row][col];
        }
    }
    // printing the array
    for(int row = 0; row<3; row++){
    for(int col = 0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    printSum(arr, 3 ,3);
    largestRowSum(arr, 3, 3);
  
}