#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    ofstream out("numbers.bin", ios::binary);

    for (int i = 0; i < 10000; i++) {
        int x = rand() % 2 == 0 ? -1 : 1;
        out.write((char*)&x, sizeof(int));
    }

    out.close();

    ifstream in("numbers.bin", ios::binary);

    int *arr = new int[10000];

    in.read((char*)arr, 10000 * sizeof(int));

    in.close();

    int sum = 0;

    for (int i = 0; i < 10000; i++)
        sum += arr[i];

    cout << "Сумма = " << sum << endl;

    delete[] arr;

    return 0;
}
