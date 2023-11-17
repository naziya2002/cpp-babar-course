#include <iostream>
using namespace std;

void fib(int n) {
    if (n == 0) {
        cout << 0;
    } else if (n == 1) {
        cout << 0 << " " << 1;
    } else {
        int num1 = 0;
        int num2 = 1;
        cout << num1 << " " << num2 << " ";

        for (int i = 2; i < n; ++i) {
            int num3 = num1 + num2;
            cout << num3 << " ";
            num1 = num2;
            num2 = num3;
        }
    }
}

int main() {
    int n;
    cin >> n;
    fib(n);

    return 0;
}
