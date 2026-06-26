#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int lastIndex(const string &s, char c) {
    for (int i = s.length() - 1; i >= 0; i--)
        if (s[i] == c)
            return i;

    return -1;
}

void test() {
    assert(lastIndex("program", 'r') == 4);
    assert(lastIndex("hello", 'l') == 3);
    assert(lastIndex("abc", 'z') == -1);

    cout << "Тесты пройдены.\n";
}

int main() {
    test();

    string s;
    char c;

    cout << "Введите строку: ";
    getline(cin >> ws, s);

    cout << "Введите символ: ";
    cin >> c;

    int pos = lastIndex(s, c);

    if (pos == -1)
        cout << "Символ не найден.\n";
    else
        cout << "Последнее вхождение: " << pos << endl;

    return 0;
}
