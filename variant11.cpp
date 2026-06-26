#include <iostream>
#include <cassert>

using namespace std;

bool differentDigits(int n) {
    bool used[10] = {false};
    n = abs(n);

    if (n == 0)
        return true;

    while (n > 0) {
        int d = n % 10;
        if (used[d])
            return false;
        used[d] = true;
        n /= 10;
    }

    return true;
}

void findNumbers(int N) {
    for (int i = 0; i <= N; i++)
        if (differentDigits(i))
            cout << i << " ";
}

void test() {
    assert(differentDigits(1234));
    assert(differentDigits(9087));
    assert(!differentDigits(1123));
    assert(!differentDigits(100));

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    int N;
    cout << "Введите N: ";
    cin >> N;

    findNumbers(N);

    return 0;
}
