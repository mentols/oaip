#include <iostream>
using namespace std;


class Ship
{
private:
    int lenght;
    double millage;
    char category;
    bool weapon;
    char model[25];
    int number[6];
    
public:
    Ship()
    {
        this->lenght = 250;
        this->millage = 3452.8;
        this->category = 'A';
        this->weapon = false;
        memcmp(this->model, "Maria", 25);
        this->number[0] = 0;
        this->number[1] = 0;
        this->number[2] = 0;
        this->number[3] = 0;
        this->number[4] = 0;
        this->number[5] = 0;
    }
    Ship(int len, double dist, char cat, bool wep, char model[25], int number0, int number1, int number2, int number3, int number4, int number5)
    {
            this->lenght = len;
            this->millage = dist;
            this->category = cat;
            this->weapon = wep;
            memcpy(this->model, model, 25);
            this->number[0] = number0;
            this->number[1] = number1;
            this->number[2] = number2;
            this->number[3] = number3;
            this->number[4] = number4;
            this->number[5] = number5;
        }
    ~Ship(){}
    void print()
    {
        const char* q1 = this->weapon == true ? "имеет" : "не имеет";
        cout << "Корабль " << this->model << " с номером ";
        for (int i = 0; i < 6; i++)
        {
            cout << this->number[i];
        }
        cout << ", категорией " << this->category << ", длинной " << this->lenght << " метров, оружия " << q1 << " прошёл " << this->millage << " километров" << endl;
    }
    double chekDiesel(double dist, double bad, double normal, double fuel)
    {
        double end_diesel = fuel *(bad * 1.4 + normal * 0.7 + (dist - bad - normal));
        return end_diesel;
    }
    
    void setLenght(int len)
    {
        this->lenght = len;
    }

    void setDistance(double dist)
    {
        this->millage = dist;
    }

    void setType(char cat)
    {
        this->category = cat;
    }

    void setWeapon(bool wep)
    {
        this->weapon = wep;
    }

    void setModel(char model[25])
    {
        memcpy(this->model, model, 25);
    }

    void setNumber(int number0, int number1, int number2, int number3, int number4, int number5)
    {
        this->number[0] = number0;
        this->number[1] = number1;
        this->number[2] = number2;
        this->number[3] = number3;
        this->number[4] = number4;
        this->number[5] = number5;
    }
    int getLenght()
    {
        return this->lenght;
    }

    double getDistance()
    {
        return this->millage;
    }

    char getCategory()
    {
        return this->category;
    }

    bool isWeapon()
    {
        return this->weapon;
    }

    char* getModel()
    {
        return this->model;
    }

    int* getNumber()
    {
        return this->number;
    }
};


int main(int argc, const char * argv[])
{
    double disel;
    Ship* boat = new Ship();
    ...////////////
    boat->print();
    boat->setLenght(50);
    boat->setDistance(17);
    boat->setType('C');
    boat->setWeapon(false);
    char c[25] = "Avrora";
    boat->setModel(c);
    boat->setNumber(8, 5, 1, 8, 0, 0);
    boat->print();
    disel = boat->chekDiesel(34892, 23411, 11481, 3);
    
    int len;
    double distance;
    char type;
    bool weapon;
    char model[25];
    int number[6];

    cout << "Введите длинну корабля: ";
    cin >> len;
    cout << "Введите пробег: ";
    cin >> distance;
    cout << "Введите категорию корабля (A-G): ";
    cin >> type;
    cout << "На корабль установлено оружие(1 - да | 0 - нет): ";
    cin >> weapon;
    cout << "Введите название корабля: ";
    cin.ignore();
    cin.getline(model, 25);
    cout << "Введите по цифрам номер корабля\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "Цифра №" << i+1 << " : ";
        cin >> number[i];
    }
    
    Ship* boat1 = new Ship(len, distance, type, weapon, model, number[0], number[1], number[2], number[3], number[4], number[5]);
    boat1->print();
    disel = boat1->chekDiesel(34892, 23411, 11481, 3);

    boat1->~Ship();
    delete boat1;
    return 0;
}
