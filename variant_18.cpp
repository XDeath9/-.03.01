#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double f(double x) {
    return x * x + 2 * x + 1;
}

double derivative(double (*func)(double), double x) {
    const double h = 1e-6;
    return (func(x + h) - func(x - h)) / (2 * h);
}

void test() {
    assert(abs(derivative(f, 2) - 6) < 0.001);
    assert(abs(derivative(f, 0) - 2) < 0.001);

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    double x;

    cout << "Введите x: ";
    cin >> x;

    cout << "Производная = " << derivative(f, x) << endl;

    return 0;
}
