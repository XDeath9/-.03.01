#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void sortStrings(string arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void test() {
    string a[] = {"banana", "apple", "pear"};
    sortStrings(a, 3);

    assert(a[0] == "apple");
    assert(a[1] == "banana");
    assert(a[2] == "pear");

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    int n;
    cout << "Количество строк: ";
    cin >> n;

    string *arr = new string[n];

    cin.ignore();

    for (int i = 0; i < n; i++)
        getline(cin, arr[i]);

    sortStrings(arr, n);

    cout << "После сортировки:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    delete[] arr;
    return 0;
}
