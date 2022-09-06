#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    const int m = 3, n = 4;
    int mas[m][n];
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Введите элемент mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << mas[i][j] << ' ';
        }
    cout << endl;
    }
    
    int min = mas[0][0];
    int imini = 0, iminj = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(mas[i][j] <= min)/////////
            {
                min = mas[i][j];
                imini = i;
                iminj = j;
            }
        }
    }
    
    cout << "Минимальный индекс массива: mas[" << imini << "][" << iminj <<']' << endl;
    
    return 0;
}
