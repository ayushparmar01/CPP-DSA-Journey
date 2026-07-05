#include<iostream>
using namespace std;

void update(int **p2) {
    p2 = p2 + 1;
    // // kuch chnage hogaa -> NO

    // *p2 = *p2 + 1;
    // // kuch chnage hogaa -> YES

    // **p2 = **p2 + 1;
    // kuch chnage hogaa -> YES



}
int main() {

    int i = 5;
    int *p = &i;
    int ** p2 = &p;
    
    cout << i << endl;
    cout << *p << endl;
    cout << ** p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;

    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;

    
    return 0;
}