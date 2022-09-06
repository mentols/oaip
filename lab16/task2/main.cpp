#include <iostream>
using namespace std;

struct note
{
    char first_name[15]; // Фамилия
    char last_name[15]; // Имя
    int fone_number;
    int birthday[8];// Номер телефона
};

int main(int argc, const char * argv[])
{
    const int n = 15;
    note man[n];
    for (int i = 0; i < n; i++)
    {
        char fname[15];
        char lname[15];
        cout << "Введите вашу фамилию: ";
        cin.getline(fname, 15);
        cout << "Введите ваше имя: ";
        cin.getline(lname, 15);
        strcpy(man[i].first_name, fname);
        strcpy(man[i].last_name, lname);
        cout << "Ввеите дату рождения без пробелов одной строкой(30\10\2004)\n";
        cout << "первая цифра числа дня: ";
        cin >> man[i].birthday[0];
        cout << "вторая цифра числа дня: ";
        cin >> man[i].birthday[1];
        cout << "первая цифра числа месяца: ";
        cin >> man[i].birthday[2];
        cout << "вторая цифра числа месяца ";
        cin >> man[i].birthday[3];
        cout << "первая цифра числа года: ";
        cin >> man[i].birthday[4];
        cout << "вторая цифра числа года";
        cin >> man[i].birthday[5];
        cout << "третья цифра числа года";
        cin >> man[i].birthday[6];
        cout << "четвёртая цифра числа года";
        cin >> man[i].birthday[7];
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (man[i].fone_number < man[i + 1].fone_number)
            {
                swap(man[i], man[i + 1]);//////
            }
        }
    }
    int f = 0;
    bool flag = false;
    char inp[15];
    cin.getline(inp, n);
    for (int i = 0; i < n; i++)
    {
        f = strcmp(man[i].first_name , inp);
        if (f == 0)
        {
            flag = true;
        }
    }
    const char* s = flag == true ? "Есть" : "Нету";
    cout << s << endl;
    return 0;
}
