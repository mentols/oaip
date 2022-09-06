#include <iostream>
using namespace std;

int main()
{
    double rez,m, n = 100;
    cout << "Введите m: ";
    cin >> m;
    
    for (n; n <= 1000; n += 100)
    {
        rez = n / m;
        cout << rez << endl;
    }
    
    return 0;
}
