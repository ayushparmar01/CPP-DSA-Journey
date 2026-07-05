#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int i, int j) {

    // base case
    if(i > j)
        return true;

    if (str[i] != str[j]){
        return false;
    }
    else {
        // Recursive Call
        return checkPalindrome(str, i+1, j-1);
    }
   
}


int main() {

    string name = "aabbaa";

    bool isPalindrome =  checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome) {
        cout << "Valid Palindrome" << endl;
    }
    else {
        cout << " Not a Valid Palindrome" << endl;
    }
    
    return 0;
}