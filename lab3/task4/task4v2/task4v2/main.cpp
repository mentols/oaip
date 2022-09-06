#include <iostream>
using namespace std;

int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int Min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    int x, y, z, chis, znam, rez;
    
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    
    chis = Max(y, z);
    znam = Min(Min(x, y), Min(y, z));
    rez = chis/znam;
    
    cout << "Result is: " << rez << endl;
    return 0;
}
