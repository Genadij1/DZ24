#include <iostream>

using namespace std;

int main() {
    int A;

    cout << "������ ���� ����� A: ";
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
        cout << "��� ���� ���� ����� " << A << " ������� " << A * A << endl;
    }
    else {
        cout << "��� ���� ���� ����� " << A << " �� ������� " << A * A << endl;
    }

    return 0;
}
