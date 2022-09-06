#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    unsigned char i = 'D';
    unsigned char *s = &i; // указатель
    unsigned char & pr = i; // ссылка
    
    cout << "значание i по перменной: " << i << endl;
    cout << "значание i по указателю: " << *s << endl;
    cout << "значание i по ссылке: " << pr << endl;
    
    i++;
    cout << i << endl;
    *s += 1;
    cout << *s << endl;
    pr++;
    cout << pr << endl;
    
    
    cout << "Адресс переменой: " << &i << endl;
    cout << "Значение адресса в указателе: " << s << endl;
    cout << "Значение адрресса в ссылке: " << &pr << endl;
    
    return 0;
}
