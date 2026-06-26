#include <iostream>
#include <cassert>

using namespace std;

int countEven(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            count++;

    return count;
}

void test() {
    int a[] = {1,2,3,4,5,6};
    assert(countEven(a,6) == 3);

    int b[] = {1,3,5};
    assert(countEven(b,3) == 0);

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Введите элементы:\n";
    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << "Количество четных чисел = "
         << countEven(arr,n) << endl;

    delete[] arr;

    return 0;
}
