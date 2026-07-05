// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;

//     cout << "Reversed array: ";

//     for(int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    int s = 0;
    int e = n-1;

    while(s<e){
        int temp = arr[s];
         arr[s] = arr[e];
         arr[e] = temp;

        s++;
        e--;
    }

   for(int i = 0; i< n; i++){
    cout << arr[i] << " ";
 
}
return 0; 
}