#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    double x, y, z, chis, znam, rez, mayz, mixy, miyz, dr;
    
    cout << "Введите x: ";
    cin >>  x;
    cout << "Введите y: ";
    cin >>  y;
    cout << "Введите z: ";
    cin >>  z;
    
    { // максимум  и минимальное значений y и z
        if(y > z)
        {
            mayz = y;
            miyz = z;
        }
        else
        {
            mayz = z;
            miyz = y;
        }
    }
    { // минимум значний x и y
        if(x > y)
        {
            mixy = y;
        }
        
        else
        {
            mixy = x;
        }
    }
    { // минимум минимумов (x,y) и (y,z)
        if (mixy > miyz)
        {
            dr = miyz;
        }
        else
        {
            dr = mixy;
        }
    }
    chis = mayz;
    znam = dr;
    
    if (chis == 0 || znam == 0)
    {
        cout << "Выражение равно 0 !" << endl;
        return 0;
    }
    
    rez = chis / znam;
    cout << "u = " << rez << endl;
    
    return 0;
}
