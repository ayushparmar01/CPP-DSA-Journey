#include<iostream>
using namespace std;

//  functions signature
void printCounting(int n){
    //  function body
    for(int i=1; i<=n; i++){
        cout << i << endl;
    }
}
int main(){
    int n;
        cin >> n;

        // functions call
    printCounting( n);    

    return 0;
}
