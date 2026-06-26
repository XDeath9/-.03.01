#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string trim(string s) {

    int left = 0;
    while(left < s.size() && s[left] == ' ')
        left++;

    int right = s.size() - 1;
    while(right >= left && s[right] == ' ')
        right--;

    return s.substr(left, right - left + 1);
}

void test() {
    assert(trim("   hello   ") == "hello");
    assert(trim("abc") == "abc");
    assert(trim("   test") == "test");

    cout << "Тесты пройдены.\n";
}

int main() {

    test();

    string s;

    cout << "Введите строку:\n";
    getline(cin >> ws, s);

    cout << "Результат:\n";
    cout << trim(s);

    return 0;
}
