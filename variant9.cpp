#include <iostream>
#include <cassert>

using namespace std;

int digitSum(int n) {
    n = abs(n);

    return n / 100 + (n / 10) % 10 + n % 10;
}

void findNumbers(int N) {
    for (int i = 100; i <= 999; i++)
        if (digitSum(i) == N)
            cout << i << " ";
}

void test() {
    assert(digitSum(123) == 6);
    assert(digitSum(999) == 27);
    assert(digitSum(100) == 1);

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    int N;

    cout << "Введите сумму цифр: ";
    cin >> N;

    findNumbers(N);

    return 0;
}
