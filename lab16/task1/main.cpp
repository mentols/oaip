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
    int n;
    
    do
    {
    cout << "Введите количество машин: ";
    cin >> n;
    }
    while(n < 0);
    
    struct avto car[n];/////////////////
    for (int i = 0; i < n; i++)
    {
        cout << "Введите пробег: ";
        cin >> car[i].mileage ;
        cout << "Введите год машины: ";
        cin >> car[i].year ;
        cout << "Введите буквы номера(2 шт.):\n";
        for (int j = 0; j < 2; j++)
        {
            cout << j + 1 << " буква: ";
            cin >> car[i].titles[j];
        }
        cout << "Введите цифры номера (4 шт.)\n";
        for (int j = 0; j < 4; j++)
        {
            cout << j + 1 << " цифра: ";
            cin >> car[i].numbers[j];
        }
        cout << "Автомобиль состоит на учёте (1 - да 0 - нет): ";
        int q;
        cin >> q;
        car[i].registered = q == 1 ? true : false;
    }
    cout  << "---------------------------------------------------------\n" << "|\tГод\t\t|\tПробег\t\t|\tРегистрация\t|\tНомер\t|\n" << "---------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        const char* q1 = car[i].registered == true ? "В наличии" : "Не в налчии";
        cout << "|\t" << car[i].year << "\t|\t" << car[i].mileage << "\t\t|\t" << q1 << "\t|\t";
        for (int j = 0; j < 4; j++)
        {
            cout << car[i].numbers[j];
        }
        cout << '-';
        for (int j = 0; j < 2; j++)
        {
            cout << car[i].titles[j];
        }
        cout << "\t|\n" << "---------------------------------------------------------" << endl;
    }
    
    int y;
    int count = 0;
    cout << "Введите год автомобиля: ";
    cin >> y;
    
    for (int i = 0; i < n; i ++)
    {
        if (car[i].year >= y)
        {
            count++;
        }
    }
    cout << "Машин младше " << y << " года - " << count << endl;
    
    int n1;
    do
    {
    cout << "Введите количество машин: ";
    cin >> n1;
    }
    while(n < 0);
    avto* autos = new avto[n1];
    if (autos == NULL)
    {
        cout << "Недостаточно поеративной памяти" << endl;
        return 0;
    }
    
    for (int i = 0; i < n1; i++)
    {
        cout << "Введите пробег: ";
        cin >> autos[i].mileage ;
        cout << "Введите год машины: ";
        cin >> autos[i].year ;
        cout << "Введите буквы номера(2 шт.):\n";
        for (int j = 0; j < 2; j++)
        {
            cout << j + 1 << " буква: ";
            cin >> autos[i].titles[j];
        }
        cout << "Введите цифры номера (4 шт.)\n";
        for (int j = 0; j < 4; j++)
        {
            cout << j + 1 << " цифра: ";
            cin >> autos[i].numbers[j];
        }
        cout << "Автомобиль состоит на учёте (1 - да 0 - нет): ";
        int q;
        cin >> q;
        autos[i].registered = q == 1 ? true : false;
    }
    cout  << "---------------------------------------------------------\n" << "|\tГод\t\t|\tПробег\t\t|\tРегистрация\t|\tНомер\t|\n" << "---------------------------------------------------------\n";
    for (int i = 0; i < n1; i++)
    {
        const char* q1 = autos[i].registered == true ? "В наличии" : "Не в налчии";
        cout << "|\t" << autos[i].year << "\t|\t" << autos[i].mileage << "\t\t|\t" << q1 << "\t|\t";
        for (int j = 0; j < 4; j++)
        {
            cout << autos[i].numbers[j];
        }
        cout << '-';
        for (int j = 0; j < 2; j++)
        {
            cout << autos[i].titles[j];
        }
        cout << "\t|\n" << "---------------------------------------------------------" << endl;
    }
    
    return 0;
}

void print(int year, double mileage, bool registered, char titles[3], int numbers[4])
{
    const char* q1 = registered == true ? "состоит" : "не состоит";
    cout << "Машина " << year << " года " << mileage << "км пробега, на учёте " << q1 << " регистрационный номер машины: " << numbers[0] << numbers[1] << numbers[2] << numbers[3]  << '-' << titles[0] << titles[1] << endl;
}
