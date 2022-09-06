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

int main()
{
    long double Y = 0.0, S = 0.0, a, b, r, h, x, sum = 0.0;
    int n, k = 1;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter n: ";
    cin >> n;
    
    cout << "|\t x \t\t|\t Y(x) \t|\t S(x) \t\t|\t Y(x)-S(x) \t|" << endl;
    
    h = (b - a)/n;
    for (x = a; x <= b; x = x + h)
    {
        Y = (exp(x) - exp(-x)) / 2;
        for (k; k <= n; k++)
        {
            S = sum + ( (pow(x, 2*k + 1)) / (fact(2*k + 1)) );
        }
        r = Y - S;
        cout << "|\t" << x << "\t|\t" << Y << "\t|\t" << S << "\t|\t" << r << endl;
    }
    
    return 0;
}
