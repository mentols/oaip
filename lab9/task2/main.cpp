#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int task;
    cout << "select task (1 or 2): ";
    cin >> task;
    
    switch (task)
    {
        case 1:
        {
            int m, n;
            
            do
            {
                cout << "enter m: ";
                cin >>m;
            }
            while(m < 1);
            do
            {
                cout << "enter n: ";
                cin >>n;
            }
            while(n < 1);
            
            int zero = n;
            int **mas = new int *[m];
            
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
            }
            
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin >> mas[i][j];
                }
               
            }
            
            for (int i = 0; i < m; i++)
            {
                
                for (int j = 0; j < n; j++)
                {
                    cout << " |\t" << mas[i][j] << '\t';
                }
                cout << "|" << endl;
            }
            
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (mas[i][j] == 0)
                    {
                        if (j < zero)
                        {
                            zero = j;
                        }
                    }
                    
                }
            }
            cout << "first zero in " << zero + 1 << endl;
            
            for(int i = 0; i < m; i++)
            {
                delete [] mas[i];
            }
            delete [] mas;
            mas = NULL;
            
            break;
        }




        case 2:
        {
            int n, m;
            
            do //ввод размерности массива
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
            
            int **mas = new int *[m];
            for (int i = 0; i < m; i++) // создание массива
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
            }
            
            for (int i = 0; i < m; i++) // инициализация массива
            {
                for (int j = 0; j < n; j++)
                {
                    cin >> mas[i][j];
                }
            }
            
            for (int i = 0; i < m; i++) // вывод первичного массива
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "|\t" << mas[i][j] << '\t';
                }
                cout << '|' << endl;
            }
            
            int *sort = new int[m]; // создание массива харакетеристик
            for (int i = 0; i < m; i++) // инициализация массива характеристик
            {
                for (int j = 0; j < n; j++)
                {
                    if (mas[i][j] < 0 && mas[i][j] % 2 == 0)
                    {
                        sort[i] += mas[i][j];
                    }
                }
            }
            
            cout << endl << "Характеристика массива по строкам: " << endl; // вывод характеристики до сортировки
            for (int i = 0; i < m; i++)
            {
                cout << i << " | " << sort[i] << endl;
            }
            
            // сортировка по характериситике строки
            for (int si = 0; si < m - 1; si++)
            {
                for (int sj = 0; sj < m - si - 1; sj++)
                {
                    if (sort[sj + 1] > sort[sj])
                    {
                        swap(mas[sj + 1], mas[sj]);
                        swap(sort[sj + 1], sort[sj]);
                    }
                }
            }
            
            for (int i = 0; i < m; i++) // вывод отсортированного массива
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "|\t" << mas[i][j] << '\t';
                }
                cout << '|' << endl;
            }
            
            cout << endl << "Характеристика отсортированного массива: " << endl; // вывод характеристики нового массива
            for (int i = 0; i < m; i++)
            {
                cout << i << " | " << sort[i] << endl;
            }
            
            for(int i = 0; i < m; i++) // удаление массива
            {
                delete [] mas[i];
            }
            delete [] mas;
            mas = NULL;
            
            break;
        }
        
        default:
        {
            cout << "unknown task" << endl;
            return 0;
        }
    }
    
    
    
    return 0;
}
