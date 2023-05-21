#include <iostream>
using namespace std;
int main() {
    int k;

    cout << "Enter the value of k: ";
    cin >> k;

    for (int i = 1; i <= 10; ++i) {
        int result = i * k;
        cout << i << " x " << k << " = " << result << endl;
    }

    return 0;
}
