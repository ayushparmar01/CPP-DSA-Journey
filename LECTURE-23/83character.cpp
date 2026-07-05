#include<iostream>
using namespace std;

// bool isPresent(int arr[][4], int target, int row, int col) {
//     for(int row=0; row<3; row++) {
//         for(int col=0; col<4; col++) {
//             if(arr[row][col] == target) {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
int main() {

    int arr[3][4];

    // input the array -> taking input row wise
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++) {
            cin >> arr[row][col];
        }
    }

    // taking input column wise
    
    // for(int row = 0; row<3; row++){
    //     for(int col = 0; col<4; col++) {
    //         cin >> arr[row][col];
    //     }
    // }


    // printing the array
    for(int row = 0; row<3; row++){
    for(int col = 0; col<4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    // cout << "enter the element to search" << endl;
    // int target;
    // cin >> target;

    // if(isPresent(arr, target, 3, 4)) {
    //     cout << "Element found " << endl;
    // }
    // else {
    //     cout << "Element not found";
    // }
    return 0;
}