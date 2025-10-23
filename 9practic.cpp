#include <iostream>
using namespace std;

int main() {
    int n = 1; 
    while (true) {
        cout << "Enter the number (0 to exit): ";
        cin >> n;

        if (n == 0) {
            break;
        }

        if (n < 0 || n > 15) {
            cout << "Incorrect input! Your number must be between 1 and 15." << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            cout << "The cycle has completed: cycle " << i + 1 << endl;
        }
    }

    return 0;
}

