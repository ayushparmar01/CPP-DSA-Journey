// couting form 1 to n

#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter the value of n: " ;
    cin >> n;
    cout << "priting counting from 1 to n" << endl;

    // for(int i=1; i<=n; i++){
    //     cout << i <<endl;
    // }

    // int i=1;
    //     for(; ;){
    //         if(i<=n){
    //             cout << i <<endl;
    //         }
    //         else{
    //             break;
    //         }
    //     i++;
    // }
 

    // hum loop ke andar multiple variable daal skte hai
    for(int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
        cout<<a <<" "<< b << " "<< c << endl;
    }
}