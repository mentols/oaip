#include <iostream>
using namespace std;

bool func1(float **array, int m, int n, float number)
{
    bool rez = true;
    float sum = 0;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += array[i][j];
            }
        }
    }
    
    if (sum < number)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int func2(int array[], int n, int &p, int &s)
{
    int count = 0;
    p = 1;
    s = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 6 == 0)
        {
            p *= array[i];
            s += array[i];
        }
        
        if (array[i] > 0)
        {
            count++;
        }
    }
    return count;
}


int main(int argc, const char * argv[])
{
    int choose;
    cout << "enter choose: ";
    cin >> choose;
    
    switch (choose)
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
            
            float **mas = new float* [m];
            if (mas == NULL)
            {
                cout << "try again latter..." << endl;
                return 0;
            }
            
            for (int i = 0; i < m; i++)
            {
                mas[i] = new float[n];
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
            
            float number;
            cout << "enter number: ";
            cin >> number;
            
            bool rez;
            rez = func1(mas, m, n, number);
            cout << rez << endl;
            
            for(int i = 0; i < m; i++)
            {
                delete [] mas[i];
            }
            delete [] mas;
            mas = NULL;
            
            return 0;
            break;
        }
            
        case 2:
        {
            int n;
            do
            {
                cout << "enter n: ";
                cin >> n;
            }
            while(n < 1);
            int mas[n];
            
            for (int i = 0; i < n; i++)
            {
                cin >> mas[i];
            }
            
            cout << endl << "print array:" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << mas[i] << ' ';
            }
            cout << "\n\n";
            
            int count, sum, proizv;
            int &rSum = sum;
            int &rProizv = proizv;
            
            count = func2(mas, n, rProizv, rSum);
            cout << "count < 0 is: " << count << endl << "sum % 6: " << rSum << endl << "proizv % 6:" << rProizv << endl;
            
            break;
        }
            
        default:
            cout << "error" << endl;
            break;
    }
    
    
}
