#include <iostream>
#include <ctime>
#include <string>
#include <cassert>

using namespace std;

string months[] = {
    "январь","февраль","март","апрель",
    "май","июнь","июль","август",
    "сентябрь","октябрь","ноябрь","декабрь"
};

string currentDate() {

    time_t t = time(nullptr);
    tm *now = localtime(&t);

    return to_string(now->tm_mday) + "/" +
           months[now->tm_mon] + "/" +
           to_string(now->tm_year + 1900);
}

void test() {

    assert(!currentDate().empty());

    cout<<"Тесты пройдены.\n";
}

int main() {

    test();

    cout<<currentDate()<<endl;

    return 0;
}
