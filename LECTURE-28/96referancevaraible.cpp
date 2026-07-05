// referance variable in c++
// pass by value me hum copy banate hai variable ki pr pass by referance me hum memory me name dusra de dete hai


#include<iostream>
using namespace std;


int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int& fun(int n) {
    int* ptr = &n;
    return ptr;
}


void update2(int &n) {
    n++;
} 

void update1(int n) {
    n++;
}
int main() {

  /*
    int i = 5;
    // create a referance variable

    int& j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

    int n = 5;
    cout << "before " << n << endl;
    update2(n);
    cout << "After " << n << endl;

    func(5)
    return 0;
}