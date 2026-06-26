#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int ROWS = 100;
    const int COLS = 200;

    float **arr = new float*[ROWS];

    for (int i = 0; i < ROWS; i++)
        arr[i] = new float[COLS];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            arr[i][j] = -1.0f + 2.0f * rand() / RAND_MAX;

    cout << "Первые 5 элементов:\n";
    for (int i = 0; i < 5; i++)
        cout << arr[0][i] << " ";

    cout << endl;

    for (int i = 0; i < ROWS; i++)
        delete[] arr[i];

    delete[] arr;

    return 0;
}

