#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    float z1, z2, m, n;
    
    cout << "Введите значение m: ";
    cin >> m;
    cout << "Введите значение n: ";
    cin >> n;
    
    if (m == n)
    {
        cout << "Значение числителя равно 0 !" << endl;
        return 0;
    }
    
    z1 = ((m-1)*(sqrt(m))-(n-1)*(sqrt(n)))/((sqrt(pow(m,3)*n))+(n*m)+pow(m,2)-m);
    z2 = (sqrt(m)-sqrt(n))/n;
    
    cout << z1 << "\n" << z2 << endl;
    
    return 0;
}

