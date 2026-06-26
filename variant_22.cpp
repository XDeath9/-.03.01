#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {

    cout << "Нажмите Enter первый раз...";
    cin.get();

    auto start = steady_clock::now();

    cout << "Нажмите Enter второй раз...";
    cin.get();

    auto finish = steady_clock::now();

    auto ms = duration_cast<milliseconds>(finish - start);

    cout << "Интервал: "
         << ms.count() / 1000.0
         << " секунд.\n";

    return 0;
}
