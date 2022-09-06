#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    int task;
    cout << "seletc task(1, 2, 3, 4, 5): ";
    cin >> task;
    
    switch (task)
    {
        case 1:
        {
            int m, n;
            
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
            
            
            char **mas = new char* [m];
            if (mas == NULL)
            {
                cout << "try again latter..." << endl;
                return 0;
            }
            
            for (int i = 0; i < m; i++)
            {
                mas[i] = new char[n];
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
            int m, n;
            
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
                    cout << mas[i][j] << " ; ";
                }
                cout << endl;
            }
            
            for(int i = 0; i < m; i++)
            {
                delete [] mas[i];
            }
            delete [] mas;
            mas = NULL;
            
            break;
        }
            
        case 3:
        {
            int m, n;
            
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
            }
            
            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    mas[i][j] = -9 + rand() % 9;
                }
            }
            
            cout << "show array:" << endl;
            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "| " << mas[i][j] << " | ";
                }
                cout << endl;
            }
            
            cout << "show reverse array:" << endl;
            for(int i = m - 1 ; i > -1; i--)
            {
                for (int j = n - 1; j > -1; j--)
                {
                    cout << "| " << mas[i][j] << " | ";
                }
                cout << endl;
            }
            
            for(int i = 0; i < m; i++)
            {
                delete [] mas[i];
            }
            delete [] mas;
            mas = NULL;
            
            break;
        }
            
        case 4:
        {
            int m, n;
            
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
            }
            
            int v = -950;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    mas[i][j] = v;
                    v += 25;
                }
            }
            
            cout << "print array: " << endl;
            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "| " << mas[i][j] << " | ";
                }
                cout << endl;
            }
            
            cout << "print new array: " << endl;
            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "| " << mas[i][j] * 5 << " | ";
                }
                cout << endl;
            }
            
            for(int i = 0; i < m; i++)
            {
                delete [] mas[i];
            }
            delete [] mas;
            mas = NULL;
            
            break;
        }
            
        case 5:
        {
            int m, n;
            
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
                    mas[i][j] = -100 + rand() % 201;
                }
            }
            
            cout << "print array: " << endl;
            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "| " << mas[i][j] << " | ";
                }
                cout << endl;
            }
            
            cout << "print new array:" << endl;
            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(i > 2 && j > 2)
                    {
                        cout << "| " << mas[i][j] << " | ";
                    }
                }
                cout << endl;
            }
            
            for(int i = 0; i < m; i++)
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
