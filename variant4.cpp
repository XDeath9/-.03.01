#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double vectorLength(double arr[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i] * arr[i];

    return sqrt(sum);
}

void test() {
    double a[] = {3, 4};
    assert(vectorLength(a, 2) == 5);

    double b[] = {1, 2, 2};
    assert(vectorLength(b, 3) == 3);

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    int n;

    cout << "Введите размерность: ";
    cin >> n;

    double *arr = new double[n];

    cout << "Введите координаты:\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Длина = " << vectorLength(arr, n) << endl;

    delete[] arr;

    return 0;
}
