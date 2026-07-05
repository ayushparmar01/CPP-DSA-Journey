// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: " << "";
//     cin >> n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
        
//         while(col <= n){
//             char (ch) = 'A' + row - 1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: " << "";
//     cin >> n;
//     int row = 1;
//     while(row <= n){
//         int col = 1;
        
//         while(col <= n){
//             char (ch) = 'A' + col - 1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: " << "";
//     cin >> n;
//     int row = 1;
//     int count = 1;

//     while(row <= n){
//         int col = 1;
//         while(col <= n){
//             char ch = 'A' + count - 1;
//             cout << ch << " ";
//             count = count + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: " << "";
    cin >> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
