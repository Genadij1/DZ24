#include <iostream>

using namespace std;

int main() {

    int count = 0;

    for (int number = 100; number <= 999; ++number) {
        int hundreds = number / 100;
        int tens = (number / 10) % 10;
        int units = number % 10;

        if (hundreds == tens || hundreds == units || tens == units) {
            ++count;
        }
    }

    cout << "Number of integers with two identical digits: " << count << endl;

    return 0;
}
