#include <iostream>
using namespace std;

class Car
{
    private:
    double distance;
    char category;
    
    public:
    Car(){}
    Car(double d, char c)
    {
        distance = d;
        category = c;
    }
    ~Car(){}
    
    double getDistanse()
    {
        return distance;
    }
    double setDistanse(double d)
    {
        distance = d;
        return distance;
    }
    char getCategory()
    {
        return category;
    }
    double setCategory(char c)
    {
        category = c;
        return category;
    }
    
    double drive(double t, double v)
    {
        double d = t*v;
        distance += d;
        return d;
    }
    virtual void show()
    {
        cout << "\nОбъект: " << this << ' ' << distance << ' ' << category << endl;
    }
};


class Truck: public Car
{
    public:
    Truck(): Car()
    {}
    Truck(double d2, char c2): Car(d2, c2)
    {
        //setDistanse(d2);
        //setCategory(c2);
    }
    void show()override
    {
        cout << "Грузовик: ";
        Car::show();
    }
};




int main()
{
    
    double d1;
    char c1;
    
    cout << "enter distance: ";
    cin >> d1;
    cout << "enter category: ";
    cin >> c1;
    
    Car c(d1, c1);
    c.show();
    
    const int n = 3;
    Car m[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "enter distance: ";
        cin >> d1;
        cout << "enter category: ";
        cin >> c1;
        m[i].setDistanse(d1);
        m[i].setCategory(c1);
        m[i].show();
        
    }
    Truck d(300, 'C');
    d.show();
    return 0;
}
