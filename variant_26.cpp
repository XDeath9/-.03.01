#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

bool compareFiles(const string &file1, const string &file2) {
    ifstream f1(file1, ios::binary);
    ifstream f2(file2, ios::binary);

    if (!f1 || !f2)
        return false;

    char c1, c2;

    while (true) {
        bool r1 = (bool)f1.get(c1);
        bool r2 = (bool)f2.get(c2);

        if (r1 != r2)
            return false;

        if (!r1)
            break;

        if (c1 != c2)
            return false;
    }

    return true;
}

void test() {
    ofstream a("a.txt");
    a << "Hello";
    a.close();

    ofstream b("b.txt");
    b << "Hello";
    b.close();

    assert(compareFiles("a.txt", "b.txt"));

    cout << "Тесты пройдены.\n";
}

int main(int argc, char* argv[]) {

    test();

    if (argc != 3) {
        cout << "Использование: program file1 file2\n";
        return 1;
    }

    if (compareFiles(argv[1], argv[2]))
        cout << "Файлы одинаковые.\n";
    else
        cout << "Файлы различаются.\n";

    return 0;
}
