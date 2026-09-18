#include <iostream>
using namespace std;

int main() {
    char message[100];
    cin >> message;

    int length = 0;
    while (message[length] != '\0') {
        length++;
    }

    char result[100];
    int prevValue = 0;

    for (int i = 0; i < length; i++) {
        int currentValue = message[i] - 'A' + 1;
        int newValue;

        if (i == 0) {
            newValue = currentValue;
        } else {
            newValue = currentValue + prevValue;
            if (newValue > 26) newValue -= 26;
        }

        result[i] = 'A' + (newValue - 1);
        prevValue = currentValue;
    }

    result[length] = '\0';

    cout << result << endl;
    return 0;
}