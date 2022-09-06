#include <iostream>
using namespace std;

void print(int, double, bool, char titles[3], int numbers[4]);

struct avto
{
    int year; // дата издания
    double mileage; // количество страниц
    bool registered; // наличие регситрации
    char titles[3]; // буквы номера
    int numbers[4]; // числа номера
};

int main(int argc, const char * argv[])
{
    int choose;
    cout << "Choose task (1, 2, 3, 4): ";
    cin >> choose;
    
    switch (choose)
    {
        case 1:
        {
            avto a = {1998, 2303.4, true , {"AA"}, {9087}};
            avto b;
            b.year = 2020;
            b.mileage = 3001.1;
            b.registered = false;
            b.titles[0] = {'a'};
            b.titles[1] = {'a'};
            b.numbers[0] = {1};
            b.numbers[1] = {9};
            b.numbers[2] = {5};
            b.numbers[3] = {7};
            
            print(a.year, a.mileage, a.registered, a.titles, a.numbers);
            print(b.year, b.mileage, b.registered, b.titles, b.numbers);
            break;
        }
        case 2:
        {
            avto a;
            cout << "Введите пробег: ";
            cin >> a.mileage ;
            cout << "Введите год машины: ";
            cin >> a.year ;
            cout << "Введите буквы номера(2 шт.): ";
            cin.ignore();
            const int n = 3;
            char titles[n];
            cin.getline(titles, n);
            strncpy(a.titles, titles, n);
            cout << "Введите цифры номера (4 шт.)\n";
            cin >> a.numbers[0] >> a.numbers[1] >> a.numbers[2] >> a.numbers[3];
            cout << "Автомобиль состоит на учёте (1 - да 0 - нет): ";
            int q;
            cin >> q;
            a.registered = q == 1 ? true : false;
            
            print(a.year, a.mileage, a.registered, a.titles, a.numbers);
            break;
        }
        case 3:
        {
            avto* a = new avto;
            //////////
            a->year = 1999;
            a->mileage = 298001.1;
            a->registered = false;
            a->titles[0] = {'t'};
            a->titles[1] = {'r'};
            a->numbers[0] = {4};
            a->numbers[1] = {6};
            a->numbers[2] = {9};
            a->numbers[3] = {1};
            
            print(a->year, a->mileage, a->registered, a->titles, a->numbers);
            break;
        }
        case 4:
        {
            avto a;
            avto *w = &a;
            (*w).year = 1999;
            (*w).mileage = 50027.7;
            (*w).registered = false;
            (*w).titles[0] = {'b'};
            (*w).titles[1] = {'b'};
            (*w).numbers[0] = {4};
            (*w).numbers[1] = {0};
            (*w).numbers[2] = {4};
            (*w).numbers[3] = {0};
            
            print((*w).year, (*w).mileage, (*w).registered, (*w).titles, (*w).numbers);
            break;
        }
        default:
        {
            cout << "Неизвестная команда" << endl;
            break;
        }
    }
    return 0;
}

void print(int year, double mileage, bool registered, char titles[3], int numbers[4])
{
    const char* q1 = registered == true ? "состоит" : "не состоит";
    cout << "Машина " << year << " года " << mileage << "км пробега, на учёте " << q1 << " регистрационный номер машины: " << numbers[0] << numbers[1] << numbers[2] << numbers[3]  << '-' << titles[0] << titles[1] << endl;
}
