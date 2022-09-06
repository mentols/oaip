#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    
    double x, y, z, e;
    
    cout << "Введите z: ";
    cin >> z;
    
    if (z <= 0)
    {
        x = (3 * pow(z, 3) - z) - 5;
    }
    else
    {
        x = sqrt(z);
    }
    e = exp(x);
    y =cos(5 * x) + sin((1.0 / 5)*x) + exp(z);
    
    cout << e << endl;
    cout << y << endl;
    return 0;
}
