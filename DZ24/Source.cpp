#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number;

    string result = to_string(number);

    for (int i = 0; i < result.length(); ++i) {
        if (result[i] == '3' || result[i] == '6') {
            result.erase(i, 1);
            --i;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
