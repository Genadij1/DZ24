#include <iostream>

using namespace std;

int main() {
    int A;

    cout << "¬вед≥ть ц≥ле число A: ";
    cin >> A;

    int sum = 0;
    int temp = A;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    int cube = sum * sum * sum;

    if (A * A == cube) {
        cout << " уб суми цифр числа " << A << " дор≥внюЇ " << A * A << endl;
    }
    else {
        cout << " уб суми цифр числа " << A << " не дор≥внюЇ " << A * A << endl;
    }

    return 0;
}
