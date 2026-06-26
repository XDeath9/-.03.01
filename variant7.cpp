#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double f(double x) {
    return -x * x + 4 * x + 1;
}

double findMax(double a, double b, double step = 0.001) {
    double mx = f(a);

    for (double x = a; x <= b; x += step)
        if (f(x) > mx)
            mx = f(x);

    return mx;
}

void test() {
    assert(abs(findMax(0, 4) - 5.0) < 0.01);
    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    double a, b;
    cout << "Введите границы интервала: ";
    cin >> a >> b;

    cout << "Максимум = " << findMax(a, b) << endl;

    return 0;
}
