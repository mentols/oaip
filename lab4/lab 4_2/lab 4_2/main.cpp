#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    double f , x, e;
    int n, i;
    string f1;
    
    cout << "Ведите  x: ";
    cin >> x;
    cout << "Введите i: ";
    cin >> i;
    cout << endl;
    cout << "Для расчёта функции выберите её номер:\nРасчитать x^2 - 1\nРасчитать exp(x) - 2\nНомер: ";
    cin >> n;
    
    switch (n)
    {
        case 1:
        {
            f = pow(x, 2);
            f1 = "x^2";
            break;
        }
        case 2:
        {
            f = exp(x);
            f1 = "exp(x)";
            break;
        }
        
        default:
        {
            cout << "Неправилььный выбор функции!" << endl;
            break;
        }
    }
    
    if ( x > 0 && i % 2 == 0 )
    {
        e = (pow(i, 3)) * (sqrt(pow(f,3)));
    }
    else
    {
        if ( x < 0  && i % 2 != 0 )
        {
            e = ( 7 * i ) * ( fabs(f) );
        
        }
        else
        {
            e = sqrt(fabs(i - f));
        }
    }
    
    cout << "x= " << x << "\ti=  " << i << "\tf(x)= " << f1 << "\te=  " << e << endl;
    
    return 0;
}
