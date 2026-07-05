#include<iostream>
using namespace std;
int main(){

    char ch = '1';
    int num = 1;
    cout << endl;

    switch('1'){
        case 1: cout << "hello Ayush" << endl;
                break;

        case '1': switch(num){
                case 1: cout << "inside switch " << num << endl;
                break;
        } 
                break;      // to stop the code
         

        default: cout << "this is the default value" << endl; 
    }
    cout << endl;

}          

