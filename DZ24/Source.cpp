#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    int result = 1;

    for (int i = 0; i < y; ++i) {
        result *= x;
    }

    cout << "Result: " << result << endl;

    return 0;
}
