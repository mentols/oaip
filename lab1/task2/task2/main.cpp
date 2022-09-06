#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    const int a = 4;
    const int b = 3;

    int c = 0;
    cout << "Введите c: ";
    cin >> c;
    
    int x = 0;
    cout << "Введите x: ";
    cin >> x;
    
    int res = (pow(x,2)) - (a*x) + (b-c);
    cout << "Решением уравнения является: "<< res << endl;
    
    return 0;
}
