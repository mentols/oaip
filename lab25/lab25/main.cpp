#include <iostream>
using namespace std;

//class abc
//{
//public:
//    virtual void show()
//    {
//        cout << "*";
//    }
//};
//class deg : public abc
//{
//public:
//    void show() override
//    {
//        cout << '&';
//    }
//};

class Car
{
protected:
    int a;
    double b;
public:
    Car() {}
    Car(int a, double b) : a(a), b(b)
    {
        //this->a = a;
        //this->b = b;
    }
    void Show()
    {
        cout << "A: " << a << " B: " << b << endl;
    }
    Car operator ++()
    {
        a = a+1; b = b+1; return *this;
    }
    Car operator ++(int)
    {
        a--;
        b = b-1;
        return *this;
    }
    Car operator + (int c)
    {
        this->a = this->a+c;
        b = b + c;
        return *this;
    }
    Car operator + (Car obj)
    {
        this->a = this->a + obj.a;
        this->b = this->b + obj.b;
        return *this;
    }
    bool  operator >(Car o)
    {
        return this->a > o.a& this->b > o.b;
    }
};


int main(int argc, const char * argv[])
{
//    int n;
//    cout << "n: ";
//    cin >> n;
//    abc** m = new abc*[n];
//    for (int i = 0; i < n; i++)
//    {
//        m[i] = new deg();
//        m[i]->show();
//    }
    Car x(2, 7.4);
    x.Show();
    ++x;
    Car y = ++x;
    x.Show();
    y.Show();
    x++;
    x.Show();
    x+10;
    x.Show();
    Car z = x+100;
    z.Show();
    z + x;
    x.Show();
    z.Show();
    return 0;
}
