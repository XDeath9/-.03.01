#include <iostream>
#include <cassert>

using namespace std;

void factor(int n, int d = 2) {
    if (n == 1)
        return;

    if (n % d == 0) {
        cout << d << " ";
        factor(n / d, d);
    } else {
        factor(n, d + 1);
    }
}

void test() {
    cout << "Разложение числа 60: ";
    factor(60);
    cout << endl;
}

int main() {
    test();

    int n;

    cout << "Введите число: ";
    cin >> n;

    cout << "Простые множители: ";
    factor(n);

    cout << endl;

    return 0;
}
