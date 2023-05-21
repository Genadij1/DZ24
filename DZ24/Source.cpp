#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int count = 0;

    for (int number = 100; number <= 999; ++number) {
        int digit1 = number % 10;         
        int digit2 = (number / 10) % 10;  
        int digit3 = number / 100;     

        if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3) {
            ++count;
        }
    }

    cout << "Number of numbers with unique digits: " << count << endl;

    return 0;
}
