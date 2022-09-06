#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    float t2, m, r;
    
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите r: ";
    cin >> r;
    
    if ( (-2.5) * m < r && r <= (-2) * m )
    {
        t2 = ( (exp((fabs(m + r)))) - (log10(fabs(m))));
    }
    else
    {
        t2 = ( (exp((-1)*(fabs(m + r)))) +  (log10(fabs(m))) );
    }
    
    cout << "t2 = " << t2 << endl;
        
    return 0;
}
