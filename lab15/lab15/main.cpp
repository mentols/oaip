#include <iostream>
using namespace std;

struct stud
{
    int mark;
    int age;
    double weight;
    bool sex;
};

int main(int argc, const char * argv[])
{
    stud a;
    cout << "enter mark: ";
    cin >> a.mark;
    cout << "enter age: ";
    cin >> a.age;
    cout << "enter weight: ";
    cin >> a.weight;
    cout << "enter 0 or 1: ";
    cin >> a.sex;
    
    stud b = {7, 16, 73.4, true};
    cout << "\nОтметка: " << a.mark << "\nВозраст: " << a.age << "\nВес: "<< a.weight << endl;
    if (a.sex == 1)
    {
        cout << "MEN" << endl;
    }
    else
    {
        cout << "WOMEN" << endl;
    }
    return 0;
}
