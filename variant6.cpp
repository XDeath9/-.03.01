#include <iostream>
#include <cassert>

using namespace std;

bool isLucky(int num) {
    int a = num / 100000;
    int b = num / 10000 % 10;
    int c = num / 1000 % 10;
    int d = num / 100 % 10;
    int e = num / 10 % 10;
    int f = num % 10;

    return (a + b + c) == (d + e + f);
}

void test() {
    assert(isLucky(123321));
    assert(isLucky(555555));
    assert(!isLucky(123456));
    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    cout << "Счастливые билеты:\n";

    for (int i = 0; i <= 999999; i++)
        if (isLucky(i))
            printf("%06d\n", i);

    return 0;
}
