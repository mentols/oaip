#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    int a , b, res1, res2;
    
    cout << "Введите первое значние: ";
    cin >> a;
    cout << "Введите вторе значение: ";
    cin >> b;
    
    res1 = pow(a, 2) - pow(b, 2);
    res2 = fabs(pow(a-b, 2));
    
    if (res1 == res2)
    {
        cout << "Квадрат разности равен разности квадратов" << endl;
    }
    
    else{
        if (res1 > res2)
        {
            cout << "Разность квадратов больше квадрата разности" << endl;
        }
        else{
            cout << "Квадрат разности больше разности квадратов" << endl;
        }
    }
    
    return 0;
}
