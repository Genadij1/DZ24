#include <iostream>

using namespace std;

int main() {
    int a;
    int sum = 0;

    cout << "������ ����� a: ";
    cin >> a;

    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    cout << "���� ����� �� " << a << " �� 500: " << sum << endl;

    return 0;
}
