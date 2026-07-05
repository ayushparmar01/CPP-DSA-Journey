// tutorial code

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin>> n;
//     int i=1;
//     while(i<=n){
//         // part 1: No from 1 to n-i+j
//         int j=1;
//         while(j<=n-i+1){
//             cout<<j<<"";
//             j=j+1;
//         }
//         // Part 2: star(i-1) +2 yimes
//         j=1;
//         while(j<=(i-1)+2){
//             cout<<"*";
//             j=j+1;
//         }
//         //  part 3: no from n-i+1 to i
//         j=n-i+1;
//         while(j>=i){
//             cout<<j<<"";
//             j=j-1;
//         }
//         i=i+1;
//         cout<<endl;
//     }

// }


//  CHAT gpt code

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 1;
    while(i <= n){
        // Part 1: numbers from 1 to n-i+1
        int j = 1;
        while(j <= n - i + 1){
            cout << j;
            j++;
        }

        // Part 2: stars (2 * (i - 1))
        j = 1;
        while(j <= 2 * (i - 1)){
            cout << "*";
            j++;
        }

        // Part 3: numbers from n-i+1 down to 1
        j = n - i + 1;
        while(j >= 1){
            cout << j;
            j--;
        }

        cout << endl;
        i++;
    }
}