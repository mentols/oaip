#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[])
{
    
    double f, d, x, y;
    int n;
    
    cout << "Ведите  x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << endl;
    cout << "Для расчёта функции выберите её номер:\nРасчитать sh(x) - 1\nРасчитать x^2 - 2\nРасчитать exp(x) - 3\n\nНомерx: ";
    cin >> n;
    
    switch (n)
    {
        
        case 1: // Расчёт sh(x)
        {
            f = sinh(x);
            break;
        }
        case 2: // Расчёт x^2
        {
            f = pow(x, 2);
            break;
        }
        case 3: // Расчёт exp()
        {
            f = exp(x);
            break;
        }
        
        default: // неправильный выбор
        {
            cout << "Неправилььный выбор функции!" << endl;
            break;
        }
    }
    
    cout << "f(x) = " << f <<endl;
    
    if (x == y)
    {
        d = ( pow(f + y, 2) + pow(x, 3) );
    }
    
    else
    {
        if (x > y)
        {
            d = ( pow(fabs(f - y), 1.0 / 3) + tan(f) );
        }
        else
        {
            d = ( y - pow(f, 3) ) + cos(f);
        }
    }
    
    cout << d << endl;
    
    return 0;
}
