#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

int countLines(string filename) {

    ifstream file(filename);

    string s;
    int cnt = 0;

    while(getline(file,s))
        cnt++;

    return cnt;
}

void test() {

    ofstream out("test.txt");

    out<<"one\n";
    out<<"two\n";
    out<<"three\n";

    out.close();

    assert(countLines("test.txt")==3);

    cout<<"Тесты пройдены.\n";
}

int main() {

    test();

    string filename;

    cout<<"Введите имя файла: ";
    cin>>filename;

    cout<<"Количество строк: "
        <<countLines(filename)
        <<endl;

    return 0;
}
