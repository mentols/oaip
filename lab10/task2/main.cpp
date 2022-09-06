#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    int choose;
    cout << "Выберите номер задания(1,2,3,4): ";
    cin >> choose;
    
    switch (choose)
    {
        case 1:
        {
            const int n = 100;
            int mas[n] = { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
                -79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
                -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
                30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
                -97, -21, -95, 64, 22, -2, 69, -84, -1, -71,
                -25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
                88, -61, 0, -64, -83, 97, 0, 90, 15, 8,
                -54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
                98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
                78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };
            
            int *pMas = mas;
            int ten_count = 0;
            
            for (int i = 0; i < n; i++)
            {
                cout << pMas[i] << ' ';
            }
            cout << endl;
            
            for (int i = 0; i < n; i++)
            {
                if(pMas[i] % 10 == 0)
                {
                    ten_count++;
                }
            }
            cout << "В массиве " << ten_count << " чисел кратно 10" << endl;
            
            break;
        }
        case 2:
        {
            const int m = 25;
            const int n = 4;
            
            int **mas = new int* [m];
            if (mas == NULL)
            {
                cout << "try again latter..." << endl;
                return 0;
            }
            
            for (int i = 0; i < m; i++)
            {
                mas[i] = new int[n];
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
                for (int j = 0; j < n; j++)
                {
                    cin >> mas[i][j];
                }
            }
            
            int max = mas[0][0];
            
            for (int i = 0; i < m; i++)
            {
                max = mas[i][0];
                for (int j = 0; j < n; j++)
                {
                    cout << ' ' << mas[i][j];
                    if (mas[i][j] > max)
                    {
                        max = mas[i][j];
                    }
                }
                cout << "\t| "<< max << endl;
            }
            
            for(int i = 0; i < m; i++)
            {
                delete [] mas[i];
            }
            delete [] mas;
            mas = NULL;
        }
        case 3:
        {
            int z = 3, m = 7, n = 12, count = 0;
            
            char ***arr = new char**[z];
            //////////////////////
            for(int i = 0;i < z; i++)
            {
                arr[i] = new char*[m];
                /////////
                for(int j = 0;j < m;j++)
                {
                    arr[i][j] = new char[n];
                    ///////////////////////
                }
            }
            for(int i = 0;i < z;i++)
            {
                for(int y = 0;y < m;y++)
                {
                    for(int x = 0;x < n;x++)
                    {
                        arr[i][y][x] = 65 + rand() % 26;
                    }
                }
            }
            
            for(int i = 0;i < z;i++)
            {
                cout << endl << "Z " << i + 1 << endl;
                for(int y = 0;y < m;y++)
                {
                    for(int x = 0;x < n;x++)
                    {
                        cout << arr[i][y][x] << ' ';
                    }
                    cout << endl;
                }
            }
            
            for(int i = 0;i < z;i++)
            {
                for(int y = 0;y < m;y++)
                {
                    for(int x = 0;x < n;x++)
                    {
                        if (x == 9 and arr[i][y][x] == 'Q')
                        {
                            count++;
                        }
                    }
                }
            }
            cout << "count " << count << endl;
            break;
        }
            
        default:
        {
            cout << "Неизвестная операция" << endl;
            break;
        }
            
    }
    
    return 0;
}
