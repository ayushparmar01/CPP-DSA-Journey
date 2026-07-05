#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    return min;  // ✅ returning min value
}

int getMax(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;  // ✅ returning max value
}

int main() {
    int size;
    cout << "enter the size of the array: ";
    cin >> size;

    int num[100];
    if (size > 100) {
        cout << "Error: size exceeds array limit (100)" << endl;
        return 1;
    }

    // ✅ taking input in array
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}
