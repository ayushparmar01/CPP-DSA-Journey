#include<iostream>
#include<cstring>
using namespace std;

bool isAnagram(string s1, string s2) {

    if(s1.length() != s2.length()) return false;

    int freq[26] = {0};

    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
    }

    for(int i = 0; i < s2.length(); i++) {
        freq[s2[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) return false;
    }

    return true;
}

int main(){

    char s1[26];
    char s2[26];

    cout<< "Enter 1st string: ";
    cin >> s1;

    cout<< "Enter 2nd string: ";
    cin >> s2;

    cout << "1st string is: " << s1 << endl;
    cout << "2nd string is: " << s2 << endl;

    if(isAnagram(s1, s2)) {
        cout << "Anagram";
    } else {
        cout << "Not Anagram";
    }
    return 0;
}