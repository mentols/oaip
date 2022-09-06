#include <iostream>
using namespace std;

int fact(int);
long double sumfactA(double, int);
long double sumfactB(int);

int main(int argc, const char * argv[])
{
    int k;
    long double Asum = 0;
    cout << "enter k: ";
    cin >> k;
    cout << "sum of Bfactorials: " << sumfactB(k) << endl;
    cout << "sum of Afactorials: " << sumfactA(Asum, k) << endl;

    return 0;
}

long double sumfactA(double rez, int k)
{
    if (k == 0)
    {
        return rez;
    }
    else
    {
        return rez = ((1.0/fact(k)) + sumfactA(rez, k - 1));
    }
}
long double sumfactB(int k)
{
    long double sum = 0;
    while (k > 0)
    {
        sum += (1.0/fact(k));
        k--;
    }
    return sum;
}
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
