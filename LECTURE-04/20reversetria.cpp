// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout << "Enter the number: " << " ";
// cin >> n;
// int i=1;
// while(i<=n){
//     // space print karlo
//     int space = n-i;
//     while (space){
//         cout << " ";
//         space=space-1;
//     }
//     // star print kr loo
//     int col=1;
//     while(col<=i){
//         cout<<"*";
//         col=col+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout << "Enter the number: " << " ";
// cin >> n;
// int i=1;
// while(i<=n){
//     // space print karlo
//     int space = n-i;
//     while (space){
//         cout << " ";
//         space=space-1;
//     }
//     // star print kr loo
//     int col=1;
//     while(col<=i){
//         cout<<"*";
//         col=col+1;
//     }
//     cout<<endl;
//     i=i+1;
// }

// }

// output is 
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter the number: " << " ";
cin >> n;
int i=1;
while(i<=n){
    // space print karlo
    int space = i;
    while (space){
        cout << " ";
        space=space-1;
    }
    // star print kr loo
    int col=n-i+1;
    while(col<=i){
        cout<<"*";
        col=col+1;
    }
    cout<<endl;
    i=i+1;
}

}

// output is:
// ****
//  ***
//   **
//    *
