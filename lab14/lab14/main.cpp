#include <iostream>
#include <cmath>
using namespace std;

void star(int x)
{
    x = fabs(x);
    if (x == 0)
    {
        cout << endl;
        return;
    }
    cout << '*';
    star(x - 1);
}

void tre(int x)
{
    if (x == 0)
    {
        
        cout << endl;
        return;
    }
    cout << '*';
    star(x - 1);
}

int main()
{
//    int i;
//    cout << "enter i: ";
//    cin >> i;
//    if (i == 1)
//    {
//        main();
//    }
    int a;
    cout << "enter a: ";
    cin >> a;
    star(a);
    
    cout << a % 10 << endl;
    
    cout << a % 100 << endl;
    return 0;
}
