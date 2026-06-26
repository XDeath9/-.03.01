#include <iostream>
#include <cassert>

using namespace std;

int F(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    return 2 * F(n - 1) - F(n - 2);
}

void test() {
    assert(F(0) == 1);
    assert(F(1) == 2);
    assert(F(2) == 3);
    assert(F(3) == 4);
    assert(F(4) == 5);

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    int n;

    cout << "Введите номер элемента: ";
    cin >> n;

    cout << "F(" << n << ") = " << F(n) << endl;

    return 0;
}
