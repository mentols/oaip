#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    
    int m, t, at = 0, bt = 0;
    cout << "enter array size: ";
    cin >> m;
    cout << "enter t: ";
    cin >> t;
    
    int *a = new int[m];
    int *b = new int[m];
    
    for (int i = 0; i < m; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << "b[" << i << "]: ";
        cin >> b[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        if(a[i] > t)
        {
            at++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if(b[i] > t)
        {
            bt++;
        }
    }
    
    if (at > bt)
    {
        cout << "Массив a имеет большее количество значений t" << endl;
        
        cout << "Выведен массив a" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "a[" << i << "] = " << a[i] << endl;
        }
        cout << "Выведен массив b" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "b[" << i << "] = " << b[i] << endl;
        }
    }
    else
    {
        cout << "Массив b имеет большее количество значений t" << endl;
        
        cout << "Выведен массив b" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "b[" << i << "] = " << b[i] << endl;
        }
        cout << "Выведен массив a" << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "a[" << i << "] = " << a[i] << endl;
        }
    }
    
    delete [] a;
    delete [] b;
    
    return 0;
}
