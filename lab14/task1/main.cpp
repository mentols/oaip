#include <iostream>
#include <cmath>
using namespace std;

double asqrt(int, double);


int main(int argc, const char * argv[])
{
    int c = 1;
    double sum = 0;
    
    cout << "rez: " << asqrt(c, sum) << endl;
    
    return 0;
}



double asqrt(int c, double rez)
{
    if (c == 10)
    {
        return rez;
    }
    else
    {
        int n = pow(c, 2);
        c++;
        return rez = sqrt(n + asqrt(c, rez));
    }
}

