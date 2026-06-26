#include <iostream>
#include <string>

using namespace std;

struct Schoolboy {
    string school;
    int grade;
};

struct Student {
    string university;
    string faculty;
    string group;
};

struct Person {
    string fio;
    string birthDate;
    bool isStudent;

    Schoolboy schoolboy;
    Student student;
};

int main() {

    Person p;

    cout << "ФИО: ";
    getline(cin, p.fio);

    cout << "Дата рождения: ";
    getline(cin, p.birthDate);

    cout << "Студент? (1-да, 0-нет): ";
    cin >> p.isStudent;

    cin.ignore();

    if (p.isStudent) {
        cout << "ВУЗ: ";
        getline(cin, p.student.university);

        cout << "Факультет: ";
        getline(cin, p.student.faculty);

        cout << "Группа: ";
        getline(cin, p.student.group);
    }
    else {
        cout << "Школа: ";
        getline(cin, p.schoolboy.school);

        cout << "Класс: ";
        cin >> p.schoolboy.grade;
    }

    cout << "\nИнформация успешно введена.\n";

    return 0;
}
