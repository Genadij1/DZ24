#include <iostream>
using namespace std;
int main() {

    int A;

    cout << "Enter an integer number A: ";
    cin >> A;

    cout << "Numbers B for which A is divisible by B*B and not divisible by B*B*B: ";
    for (int B = 1; B <= A; ++B) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }

    cout << endl;

    return 0;
}
