#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; ++i) {
        sum += i;
        count++;
    }

    double average = static_cast<double>(sum) / count;

    cout << "Average: " << average << endl;

    return 0;
}
