#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    float x, y, z, g;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;

    g = ( (pow(y, x+1))/((pow(abs(y-2), 1.0/3))+3) ) + (( (x + (y/2))/(2*(abs(x+y))) )* ((pow(x+1, (-1/sin(z))))) );
    
    cout << g << endl;
    
    return 0;
}
