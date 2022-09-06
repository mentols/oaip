#include <iostream>
using namespace std;

class Object
{
public:
    virtual int length() = 0;
};

class Point : public Object{
private:
    double x;
    double y;
public:

    Point()
    {
        this->x = 0;
        this->y = 0;
    }

    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    int length() override
    {
        return 0;
    }

    double getX()
    {
        return this->x;
    }

    double getY()
    {
        return this->y;
    }

    void setX(double x)
    {
        this->x = x;
    }

    void setY(double y)
    {
        this->y = y;
    }
};

class Polygon : public Point
{
private:
    int sides;
    double a;
public:

    Polygon() : Point()
    {
        this->a = 1;
        this->sides = 3;
    }

    Polygon(double x, double y, int sides, double a) : Point(x, y)
    {
        this->sides = sides;
        this->a = a;
    }

    int length() override
    {
        return sides * a;
    }

    int getSides()
    {
        return this->sides;
    }

    double setA()
    {
        return this->a;
    }

    void setSides(int sides)
    {
        this->sides = sides;
    }

    void setA(double a)
    {
        this->a = a;
    }
};

int main()
{
    int n = 5;
    Object** object = new Object*[n];
    if (object == NULL) {
        return 0;
    }
    object[0] = new Point();
    object[1] = new Point(3.4,5.4);
    object[2] = new Polygon();
    object[3] = new Polygon(3.2,48.6,4,1);
    object[4] = new Polygon(0,0 ,5,2);

    for (int i = 0; i < n;i++)
    {
        cout << "Объект [" << i << "]: " << object[i]->length() << endl;
    }
    return 0;
}
