// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: " << "";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch = 'A' + i - 1;
//             cout << ch;
//            j=j+1;
//         }
//          cout << endl;
//         i=i+1;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: " << "";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int value = i;
//         while(j<=i){                    
//             char ch = 'A'+j-2;
//             cout << ch;
//             value = value+1;
//            j=j+1;
//         }
//          cout << endl;
//         i=i+1;
//     }
    
// }

// / output is this:
// A
// B c
// D E F
// G H I J

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: " << "";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int value = i;
//         while(j<=i){                    
//             char ch = 'A'+i+j-2;
//             cout << ch;
//             value = value+1;
//            j=j+1;
//         }
//          cout << endl;
//         i=i+1;
//     }
    
// } 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: " << "";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch = 'A'+n-i;
       
        while(j<=i){                    
            
            cout << ch;
            ch = ch+1;
           j=j+1;
        }
         cout << endl;
        i=i+1;
    }
    
} 