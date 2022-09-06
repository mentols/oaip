#include <iostream>
using namespace std;

class Parent
{
private:
    char name[25];
public:
    Parent(char name[25])
    {
        memcpy(this->name, name, 25);
    }
    virtual void print()
    {
        cout << this->name << "\n";
    }
};

class Son : Parent
{
private:
    char patronymic[25];
public:
    Son(char name[25], char patronymic[25]) : Parent(name)
    {
        memcpy(this->patronymic, patronymic, 25);
    }

    void print() override
    {
        cout << this->patronymic << " ";
        Parent::print();
    }
};

class Grandson : Son
{
private:
    char sername[25];
public:
    Grandson(char name[25], char patronymic[25], char sername[25]) : Son(name, patronymic)
    {
        memcpy(this->sername, sername, 25);
    }
    void print() override
    {
        cout << this->sername << " ";
        Son::print();
    }
};

int main() {

    char c1[25];
    gets_s(c1,25);
    char c2[25];
    gets_s(c2, 25)
    char c3[25];
    gets_s(c3, 25);
    Grandson* grandson = new Grandson(c1,c2,c3);
    grandson->print();
    return 0;
}
