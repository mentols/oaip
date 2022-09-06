#include <iostream>
using namespace std;

int main() {
    
    int x = 0;
    cout << "Введите x: ";
    cin >> x;
    
    int y = 0;
    cout << "Введите y: ";
    cin >> y;
    
    int c = 0;
    c = (x*(y-2))+((3*y)/3);
    cout << "Решением уравнения является:" << c << "\n";
    
    return 0;
}
