#include <iostream>
#include <cmath>
using namespace std;

int fact(int N)
{
    if (N == 0 | N == 1)
    {
        return 1;
    }
    else
    {
        return N * fact(N - 1);
    }
}

void eps(double Xn, double Xk, double h)
{
    cout << "|\t x \t|\t F(x) \t|" << endl;
    double sum = 0;
    for (double x = Xn; x <= Xk; x += h)
    {
        for (int k = 1; k < 6; k++)
        {
            sum = ( (pow(x, 2*k)) / (fact(2*k + 1)) );
        }
        cout << "|\t" << x << "\t|\t" << sum << "\t|" << endl;
    }
}

int main(int argc, const char * argv[])
{
    double Xn, Xk, h;
    cout << "enter Xn: ";
    cin >> Xn;
    cout << "enter Xk: ";
    cin >> Xk;
    cout << "enter h: ";
    cin >> h;
    
    eps(Xn, Xk, h);
    
    return 0;
}
