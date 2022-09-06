#include<iostream>
#include<set>
using namespace std;
void showSet(set<int>&);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m, n;
    cout << "Введите количество строк: ";
    cin >> m;
    m = fabs(m);
    cout << "Введите количество столбцов: ";
    cin >> n;
    n = fabs(n);
    int** mas = new int*[m];
    if (mas == NULL)
    {
        cout << "Не удалось выделить память\n";
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        mas[i] = new int[n];
        if (mas[i] == NULL)
        {
            cout << "Не удалось выделить память под строку №" << i << endl;
            return 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Введите элемент mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }
    cout << "Печать массива:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mas[i][j] << ' ';
        }
        cout << endl;
    }
    set<int>s;
    for (int j = 0; j < n; j++)
    {
        s.insert(mas[0][j]);
    }
    cout << "Первая строка массива определена множеством: ";
    showSet(s);
    for (int i = 0; i < m; i++)
    {
        delete[] mas[i];
    }
    delete[] mas;
    mas = NULL;
    cout << "Не удалось выделить память.\n";
    return 0;
}
void showSet(set<int>& m)
{
    for (set<int>::iterator i = m.begin(); i != m.end(); i++)
    {
        cout << *i << ' ';
    }
    cout << endl;
}
