// Grading system code.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter your marks: " << endl;
    cin>>n;
    if(n>=90 && n<100){
        cout << "A grade" << endl;
    }
    else if(n>=80 && n<90){
        cout << "B grade" << endl;
    }
    else if(n>=70 && n<80){
        cout << "C grade" << endl;
    }
    else if(n>=60 && n<70){
        cout << "D grade" << endl;
    }
    else if(n>=0 && n<60){
        cout << "FAIL" << endl;
    }
    else{
         cout << "Invalid number" << endl;
    }
}