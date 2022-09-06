#include <iostream>
#include <cmath>
using namespace std;

class Point
{
protected:
    double x;
    double y;
public:
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void show() {
        cout << "Точка с координатами(x = " << this->x << " | y = " << this->y << ')' << endl;
    };
};

class Circle : Point///////
{
private:
    double radius = 2;
    double S;
public:
    Circle(double x, double y) : Point(x, y)
    {
        this->S = 3.14 * pow(radius, 2);
    }
    void show()
    {
        Point::show();
        cout << "Радиус равен " << this->S << endl;
    }
};

class Sector : Circle//////////
{
private:
    double A = 1;
    double S;
    double radius = 2;
public:
    Sector(double x, double y) : Circle(x, y)
    {
        this->S = 3.14 * pow(radius, 2) * A/180;
    }
    void show()
    {
        Circle::show();
        cout << "Сектор равен " << this->S << endl;
    }
};

int main() {
    system("chcp 1251");

    Point point(3, 2);
    point.show();
    Point* point1 = new Point(5, 4);
    point1->show();
    delete point1;
    
    Circle circle(2, 1);
    circle.show();
    Circle* circle1 = new Circle(7, 6);
    circle1->show();
    delete circle1;

    Sector sector(4, 3);
    sector.show();
    Sector* sector1 = new Sector(6, 5);
    sector1->show();
    delete sector1;
    
    const int n = 5;
    Sector* sector2[n];
    for (int i = 0; i < n; i ++) {
        int k, k1;
        cout << "Введите точку х: ";
        cin >> k;
        cout << "Введите точку у: ";
        cin >> k1;
        sector2[i] = new Sector(k, k1);
    }
    cout << "Результат:" << endl;
    for (int i = 0; i < n; i++)
    {
        sector2[i]->show();
        delete sector2[i];
    }

    int n0;
    cout << "\nВведите размер динамического массива: \n";
    cin >> n0;

    Sector** sector3 = new Sector*[n0];
    for (int i = 0; i < n0; i++)
    {
        int k, k1;
        cout << "Введите точку х: ";
        cin >> k;
        cout << "Введите точку у: ";
        cin >> k1;
        sector3[i] = new Sector(k, k1);
    }
    std::cout << "\nĎîëó÷ĺííűé ěŕńńčâ:\n";
    for (int i = 0; i < n0; i++)
    {
        sector3[i]->show();
        delete sector3[i];
    }
    delete[] sector3;
    
    return 0;
}
