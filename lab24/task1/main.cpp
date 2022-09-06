#include <iostream>
using namespace std;

class Homosapiens
{
public:
    virtual void doing() = 0;
};

class Person : public Homosapiens
{
protected:
    char name[25];
    int age;
public:
    Person(int age, char name[25])
    {
        this->age = age;
        memcpy(this->name, name, 25);
    }

    void doing() override
    {
        cout << this->getName() << " не рабоатет" << endl;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setName(char name[25])
    {
        memcpy(this->name, name, 25);
    }

    int getAge()
    {
        return this->age;
    }

    char* getName()
    {
        return this->name;
    }
};

class Employee : public Person
{
protected:
    char staff[30];
    double money;
public:
    Employee(int age, char name[25], char staff[30], double money) : Person(age,name)
    {
        memcpy(this->staff, staff, 25);
        this->money = money;
    }

    void doing() override
    {
        cout << this->getName() << " не рабоатет" << endl;
    }

    void setStaff(char staff[30])
    {
        memcpy(this->staff, staff, 25);
    }
    
    void setMoney(double money)
    {
        this->money = money;
    }

    char* getStaff()
    {
        return this->staff;
    }

    double getMoney(double okl)
    {
        return (this->money + (okl*this->money/100.0));
    }
};

int main()
{
    Homosapiens** h = new Homosapiens*[2];
    char n1[25] = "Ilya";
    h[0] = new Person(5, n1);
    char n2[25] = "Ivan";
    char n3[30] = "Programer";
    h[1] = new Employee(18, n2, n3, 45.5);
    for (int i = 0; i < 2; i++)
    {
        h[i]->doing();
    }
}
