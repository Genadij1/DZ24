#include <iostream>

using namespace std;

int main() {
    int a;
    int sum = 0;

    cout << "¬вед≥ть число a: ";
    cin >> a;

    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    cout << "—ума чисел в≥д " << a << " до 500: " << sum << endl;

    return 0;
}
