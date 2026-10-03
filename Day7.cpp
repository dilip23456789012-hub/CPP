#include <iostream>
using namespace std;

int main() {
    int n;
    int binary[100];
    int i = 0;

    cout << "Enter decimal number: ";
    cin >> n;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary number: ";

    for (i = i - 1; i >= 0; i--) {
        cout << binary[i];
    }

    return 0;
}