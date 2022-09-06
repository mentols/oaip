#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    char group;
    
    cout << "Введите число: ";
    cin >> num;
    
    if (num > 0 && num % 2 == 0 )
    {
        group = 'A';
        cout << "Число " << num << " относится к группе " << group << endl;
    }
    else if (num < 0 && num > -12)
    {
        group = 'B';
        cout << "Число " << num << " относится к группе " << group << endl;
    }
    else if (num == 0 || num == 121)
    {
        group = 'C';
        cout << "Число " << num << " относится к группе " << group << endl;
    }
    else
    {
        group = 'D';
        cout << "Число " << num << " относится к группе " << group << endl;
    }
    
    return 0;
}
