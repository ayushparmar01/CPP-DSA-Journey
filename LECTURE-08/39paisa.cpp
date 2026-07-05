#include<iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int rupees100 = 0, rupees50 = 0, rupees20 = 0, rupees10 = 0; 
    int step = 1;

    while(amount > 0 && step <= 3) {

        switch(step) {
            case 1:
                if (amount >= 100) {
                    rupees100 = amount / 100;
                    amount %= 100;
                }
                step++;
                break;

            case 2:
                if (amount >= 50) {
                    rupees50 = amount / 50;
                    amount %= 50;
                }
                step++;
                break;

            case 3:
                if (amount >= 10) {
                    rupees10 = amount / 10;
                    amount %= 10;
                }
                step++;
                break;
        }
    }

    cout << "100 Rupee notes: " << rupees100 << endl;
    cout << "50 Rupee notes: " << rupees50 << endl;
    cout << "10 Rupee notes: " << rupees10 << endl;
    cout << "Remaining amount: " << amount << endl;

    return 0;
}
