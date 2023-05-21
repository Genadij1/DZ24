#include <iostream>

using namespace std;

int main() {
    int a;
    long long product = 1;

    cout << "Enter a number (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "Invalid input! Please enter a number between 1 and 20." << endl;
        return 1;
    }

    for (int i = a; i <= 20; ++i) {
        product *= i;
    }

    cout << "Product: " << product << endl;

    return 0;
}
