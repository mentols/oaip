#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    double num1, num2, res;
    char oper;
    
    cout << "Введите выражние : ";
    cin >> num1 >> oper>> num2;
    
    switch (oper) {
        case '+':
        {
            res = num1 + num2;
            break;
        }
        case '-':
        {
            res = num1 - num2;
            break;
        }
        case '*':
        {
            res = num1 * num2;
            break;
        }
        case '/':
        {
            res = num1 / num2;
            break;
        }
        default:
        {
            cout << "Неизвестная операция" << endl;
            break;
        }
    }
    
    if ((num1 == 0 && oper == '/') || (num2 == 0 && oper == '/'))
    {
        cout << num1 << oper << num2 <<'='<< "на ноль делить нельзя" << endl;
        return 0;
    }
    
    cout << num1 << oper << num2 << '=' << res << endl;
    return 0;
}
