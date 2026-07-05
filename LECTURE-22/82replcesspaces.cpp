#include<iostream>
using namespace std;
int main(){

    string replaceSpaces(string &str)
{
	string ans = "";
	for(int i = 0; i < str.length(); i++){
		if(str[i] == ' '){
			ans = ans + '@40';
		}
		else[
			ans = ans + str[i];
		]
	}
	return ans;
}


    return 0;
}