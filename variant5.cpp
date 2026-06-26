#include <iostream>
#include <cassert>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void printPrimes(int N) {
    for (int i = 2; i <= N; i++)
        if (isPrime(i))
            cout << i << " ";
}

void test() {
    assert(isPrime(2));
    assert(isPrime(3));
    assert(isPrime(13));
    assert(!isPrime(4));
    assert(!isPrime(1));

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    int N;

    cout << "Введите N: ";
    cin >> N;

    cout << "Простые числа:\n";
    printPrimes(N);

    cout << endl;

    return 0;
}
