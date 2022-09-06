#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<regex>
#include<string>
using namespace std;
bool isEx(char[]);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bool f = true;
    char str[100];
    char* pStr;
    char sep[] = " ";
    do
    {
        cout << "Введите строку: ";
        cin.getline(str, 100);
        pStr=strtok(str, sep);
        while (pStr != NULL)
        {
            isEx(pStr) ? cout << "Подстрока " << pStr << " подходит.\n" : cout << "Подстрока " << pStr << " не подходит.\n";
            pStr = strtok(NULL, sep);
        }
        cout << "Продолжить?\n(1 - да, 0 - нет): ";
        cin >> f;
        cin.ignore();
    } while (f);
    return 0;
}
bool isEx(char m[])
{
    regex reg("a[a-zA-Z]+a");
    return regex_match(m, reg);
}
