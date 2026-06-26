#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double f(double x) {
    return x * x - 2;
}

double dichotomy(double a, double b, double eps = 1e-6) {
    double c = (a + b) / 2;

    if (fabs(f(c)) < eps)
        return c;

    if (f(a) * f(c) < 0)
        return dichotomy(a, c, eps);

    return dichotomy(c, b, eps);
}

void test() {
    double x = dichotomy(1, 2);

    assert(fabs(x - sqrt(2.0)) < 0.001);

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    double a, b;

    cout << "Введите границы отрезка: ";
    cin >> a >> b;

    cout << "Нуль функции = " << dichotomy(a, b) << endl;

    return 0;
}
