#include <iostream>
#include <string>

using namespace std;

struct Worker {
    string profession[5];
    int category[5];
    int count;
};

struct Programmer {
    string university;
    int graduationYear;

    string language[5];
    string level[5];
    int count;
};

struct Employee {

    string fio;
    string birthDate;
    bool isProgrammer;

    Worker worker;
    Programmer programmer;
};

int main() {

    Employee e;

    cout << "ФИО: ";
    getline(cin, e.fio);

    cout << "Дата рождения: ";
    getline(cin, e.birthDate);

    cout << "Программист? (1-да,0-нет): ";
    cin >> e.isProgrammer;

    cin.ignore();

    if (e.isProgrammer) {

        cout << "Название ВУЗа: ";
        getline(cin, e.programmer.university);

        cout << "Год окончания: ";
        cin >> e.programmer.graduationYear;

        cout << "Количество языков (до 5): ";
        cin >> e.programmer.count;

        cin.ignore();

        for (int i = 0; i < e.programmer.count; i++) {

            cout << "Язык: ";
            getline(cin, e.programmer.language[i]);

            cout << "Уровень: ";
            getline(cin, e.programmer.level[i]);
        }

    } else {

        cout << "Количество профессий (до 5): ";
        cin >> e.worker.count;

        cin.ignore();

        for (int i = 0; i < e.worker.count; i++) {

            cout << "Профессия: ";
            getline(cin, e.worker.profession[i]);

            cout << "Категория: ";
            cin >> e.worker.category[i];

            cin.ignore();
        }
    }

    cout << "Данные введены.\n";

    return 0;
}
