// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: " << "";
//     cin >> n;
//     int row = 1;
//     int count = 1;
//     while(row<=n){
//         int column=1;
//         while(column<=row){
//         cout << count << " ";
//         count = count + 1;
//         cout << row;
//             column = column +1;
//     }

//     cout << endl;
//     row = row + 1;      
// }   
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n:" << " ";
    cin >> n;
    int i=1;
    int count = 1;
    while(i<=n){
    int j=1;
    while(j<=n){
        cout << count << " ";
        count = count + 1;
        j = j + 1;
    }
       cout << endl;
    i = i + 1;     
    }

}

