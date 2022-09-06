#include <iostream>
#include "somefunc.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    int m, n, choose;
    
    do
    {
        cout << "enter m: ";
        cin >> m;
    }
    while (m < 1);
    do
    {
        cout << "enter n: ";
        cin >> n;
    }
    while (n < 1);
    
    
    double **mas = new double* [m];
    if (mas == NULL)
    {
        cout << "try again latter..." << endl;
        return 0;
    }
    
    for (int i = 0; i < m; i++)
    {
        mas[i] = new double[n];
        if (mas[i] == NULL)
        {
            cout << "error" << endl;
            for (int j = 0; j < i; j++)
            {
                delete [] mas[j];
            }
            delete [] mas;
            mas = NULL;
            return 0;
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mas[i][j] << '\t';
        }
        cout << endl;
    }
    
    cout << "(1, 2, 3, 4): ";
    cin >> choose;
    
    switch (choose)
    {
        case 1:
            cout << "production: " << pro(mas, m, n) << endl;
            break;
        case 2:
            cout << "summ: " << sum(mas, m, n) << endl;
            break;
        case 3:
            cout << "max element: " << arrmax(mas, m, n) << endl;
            break;
        case 4:
            cout << "less arifm square: " << arifm(mas, m, n) << endl;
            break;
        default:
            break;
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mas[i][j] << '\t';
        }
        cout << endl;
    }
    
    
    for(int i = 0; i < m; i++)
    {
        delete [] mas[i];
    }
    delete [] mas;
    mas = NULL;
    
    return 0;
}
