#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    double x = 1.5;
    double* pX = &x;
    cout << "x = " << x << endl;
    cout << "adress is: " << pX << endl; // адреесс переменной
    cout << "x in adress is: " << *pX << endl; // значение х по адрессу
    cout << "& pX: " << &pX << endl; // адресс указателя на переменную
    *pX = 0.9; // оратиться к иксу, тоже самое что x = 0.9, но через указатель
    cout << "new px: " << *pX << endl;
    cout << "new x: " << x << endl;
    
    int y = 5;
    int *pY;
    pY = &y;
    cout << "pY: " <<*pY << endl;
    int *p1Y = &y;
    cout << "p1Y: " << *p1Y << endl;
    *p1Y = 2;
    cout << "p1Y new " << *p1Y << ", y is: "<< y << endl;
    
    double **ppX = &pX;
    cout << ppX << endl;
    **ppX = 0;
    cout << "new x is: " << x << endl;
    
    cout << sizeof(x) << ' ' << sizeof(y) << ' ' << sizeof(pX) << ' ' << sizeof(pY) << endl;
    return 0;
    
    
    
    
}
