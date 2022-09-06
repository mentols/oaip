#include <iostream>
#include <cmath>
using namespace std;

int fact(int N)
{
    if (N == 0 | N == 1)
        return 1;
    else //
        return N * fact(N - 1);
}

int fact1(int A)
{
    int f = 1;
    for (int i = 1; i <= A; i++)
        {
            f = f * i;
        }
    return f;
}

int main()
{
    long double x, Y, S, s;
    double a = 0.1, b = 1, h;
    int n = 10;
    cout << "|\t x \t\t|\t Y(x) \t|\t S(x) \t|" << endl;
    
    h = (b - a)/n;
    for (x = a; x <= b; x = x + h)
    {
        S = 0;
        for (int i = 1; i <= n; i++)
        {
        
            Y = exp(2*x);
            s = (pow(2 * x, i)/fact(i));
            S += s;
            
        }
        cout << "|\t" << x << "\t|\t" << Y << "\t|\t" << S + 1 << "\t|\t" << endl;
    }
    return 0;
}
