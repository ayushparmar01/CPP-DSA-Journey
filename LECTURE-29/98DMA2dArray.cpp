#include<iostream>
using namespace std;
int main() {

    /*
     for same rows and columns
    int n;
    cin >> n;

    // creation a 2d array
    int** arr = new int*[n];
    for(int i=0; i<n; i++) {
        arr[i] = new int[n];
    }

    

    // taking input4\ 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    // taking output
    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }
        */


        
    // for diffrent rows and columns    
    int rows;
    cin >> rows;

    int columns;
    cin >> columns;
    ;
    // creation a 2d array
    int** arr = new int*[rows];
    for(int i=0; i<rows; i++) {
        arr[i] = new int[columns];
    }

    

    // taking input
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++) {
            cin >> arr[i][j];
        }
    }

    // taking output
    cout << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    // releasing memory
    for(int i=0; i<rows; i++) {
        delete [] arr[i];
    }

    delete []arr;
    return 0;
}