#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){

    
    for(int i=0; i<10; i++){
       
        if(arr[i]== key){
            return 1;
        }
        else{
            return 0;
        }
    }
    return search;
}



int main() {

        int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

        cout << "enter the element to search for" << endl;
        int key;
        cin >> key;

        bool found = search(arr, 10, key);

            if(found){
                cout << "Key is present" << endl;
            }
            else{
                cout << "Key is absent" << endl;
            }

    return 0;
}
