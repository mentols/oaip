#include <iostream>
using namespace std;


int bug() // задание 2
{
    int x = 7, y = 14 , z0, z1, z2, z3, z4;
    z0 = x & y;
    z1 = x | y;
    z2 = x ^ y;
    z3 = ~x;
    z4 = x << y;
    cout << z0 << endl << z1 << endl << z2 << endl << z3 << endl << z4 << endl;
    
    return 0;
}


int main(int argc, const char * argv[]) // задание 1
{
    int x, z;
    
    cout << "Решение задания 1:" << endl;
    cout << "Ввдите x: ";
    cin >> x;
    z = (x % 7 == 5) ? x*=2 : x*=3;
    cout << "Результат: " << z << endl;
    
    cout << "Решение задания 2:" << endl;
    bug(); // задание 2
    
    return 0;
}



/*  задание 3
 
 а) x < 100 || x > 20
 b) y >= 1 && y <= 2
 c) x == a && x == b

 */

