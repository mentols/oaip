#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    float I, R, r;
    const float e = 285;
    
    cout << "Введите R: ";
    cin >> R;
    
    cout << "Введите r: ";
    cin >> r;
    
    I = (e)/(R+r);
    
    cout << "Сила тока равна: 5"<< I << endl;
    
    return 0;
}
