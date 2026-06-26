#include <iostream>
#include <cassert>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int compare(Date a, Date b) {

    if (a.year != b.year)
        return a.year < b.year ? -1 : 1;

    if (a.month != b.month)
        return a.month < b.month ? -1 : 1;

    if (a.day != b.day)
        return a.day < b.day ? -1 : 1;

    return 0;
}

void test() {

    Date a = {1,1,2024};
    Date b = {2,1,2024};
    Date c = {1,1,2024};

    assert(compare(a,b)==-1);
    assert(compare(b,a)==1);
    assert(compare(a,c)==0);

    cout<<"Тесты пройдены.\n";
}

int main() {

    test();

    Date d1,d2;

    cout<<"Введите первую дату (дд мм гггг): ";
    cin>>d1.day>>d1.month>>d1.year;

    cout<<"Введите вторую дату (дд мм гггг): ";
    cin>>d2.day>>d2.month>>d2.year;

    int res=compare(d1,d2);

    if(res==0)
        cout<<"Даты равны\n";
    else if(res<0)
        cout<<"Первая дата раньше\n";
    else
        cout<<"Первая дата позже\n";

    return 0;
}
