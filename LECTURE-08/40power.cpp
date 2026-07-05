// Using manual way
// #include<iostream>
// using namespace std;
// int main(){

//     int a, b;
//     cin >> a >> b;

//     int ans = 1;

//     for(int i=1; i<=b; i++){
//         ans = ans * a;
//     }

//     cout << "answer is: " << ans << endl;

//     return 0;
// }

// Using functions method

// #include<iostream>
// using namespace std;

// int power(int a, int b){
//     int ans = 1;
//     for(int i=1; i<=b; i++){
//         ans = ans * a;
//     }
     
//     return ans;
// }
// int main(){
//     int a, b;
//     cin >> a >> b;

//     int answer = power(a,b);
//     cout << "answer is: " << answer << endl;
//     return 0;

   
// }

// Using multiple times power

#include<iostream>
using namespace std;

int power(){
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
     
    return ans;
}
int main(){
    // int a, b;
    // cin >> a >> b;

    int answer = power();
    cout << "answer is: " << answer << endl;

    
     answer = power();
    cout << "answer is: " << answer << endl;

    
     answer = power();
    cout << "answer is: " << answer << endl;

    
     answer = power();
    cout << "answer is: " << answer << endl;
    return 0;

   
}


