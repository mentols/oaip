#include <iostream>
using namespace std;

int F(int* x, int m)
{
    int sum = 0;
    for (int j = 0; j < m; j++)
    {
        if (x[j] < 0 && x[j] % 2 == 0)
            sum += x[j];
    }
    return sum;
}
 

 
int main()
{
    int n, m;
    cout << "Enter a matrix size:" << endl;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int** a = new int*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    cout << "Enter a matrix" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (F(a[j], m) < F(a[j-1], m))
            {
                swap(a[j], a[j-1]);
            }
        }
    }
    cout << "Target matrix:" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        delete [] a[i];
    }
    delete [] a;
    
    return 0;
}
