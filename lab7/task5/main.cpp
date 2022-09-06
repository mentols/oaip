#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    const int m = 5, n = 6;
    double mas[m][n];
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Введите элемент mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }
    
    
    cout << "Элемент с одинаковыми индексами(m = n)" << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                cout << mas[i][j] << endl;
            }
        }
    }
    return 0;
}
