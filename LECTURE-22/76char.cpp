// cin exection ko stop kr deta hai jese character me pura name print nhi hua jese space, tab, nextline, enter ko stop kr deya hai
#include<iostream>
using namespace std;

int getlength(char name[]){

    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}
int main(){

    char name[20];

    cout << "Enter your name: " ;
    cin >> name;

    // name[2] = '\0'; // null character
    cout << "Your Name: " << name << endl;

    
    cout << "Total Length of string is: " << getlength(name) ;

    // return 0;
}