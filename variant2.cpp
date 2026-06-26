#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int ROWS = 100;
    const int COLS = 200;

    int **arr = new int*[ROWS];

    for (int i = 0; i < ROWS; i++)
        arr[i] = new int[COLS];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            arr[i][j] = rand() % 14 - 3;

    cout << "Первые 5 элементов:\n";
    for (int i = 0; i < 5; i++)
        cout << arr[0][i] << " ";

    cout << endl;

    for (int i = 0; i < ROWS; i++)
        delete[] arr[i];

    delete[] arr;

    return 0;
}

