#include<iostream>
#include<string>
using namespace std;

struct Sportsman
{
    string country;
    string FIO;
    int age;
    double height;
    double weight;
    int numder;
};

struct Array
{
    Sportsman* value = NULL ;
    Array* past = NULL;
    Array* next = NULL;
    void add(Sportsman* value)
    {
        if (this->value == NULL)
        {
            this->value = value;
        }
        else
        {
            if (this->next == NULL)
            {
                this->next = new Array;
                this->next->past = this;
                this->next->value=value;
            }
            else
            {
                this->next->add(value);
            }
        }
    }
    void del()
    {
        if (this->past != NULL)
        {
            this->past->next =this->next;
        }
        if (this->next != NULL)
        {
            this->next->past = this->past;
        }
        delete this;
    }
    void addBefore(Sportsman* value)
    {
        if (this->value == NULL)
        {
            this->value = value;
        }
        else
        {
            if (this->past == NULL)
            {
                this->past = new Array;
                this->past->next = this;
                this->past->value = value;
            }
            else
            {
                Array* ar = new Array;
                ar->past = this->past;
                ar->next = this;
                this->past->next = ar;
                this->past=ar;
                this->past->value = value;
            }
        }
    }
    void addAfter(Sportsman* value)
    {
        if (this->value == NULL)
        {
            this->value = value;
        }
        else
        {
            
            if (this->next == NULL)
            {
                this->next = new Array;
                this->next->past = this;
                this->next->value = value;
            }
            else
            {
                Array* ar = new Array;
                ar->next = this->next;
                ar->past = this;
                this->next->past = ar;
                this->next = ar;
                this->next->value = value;
            }
        }
    }
};

void print(Sportsman* man)
{
    cout << "\nCтрана: " + man->country + "\nФИО: " + man->FIO + "\nВозраст: " << man->age << "\nНомер: " << man->numder << "\nРост: " << man->height << "\nВес: " << man->weight << "\nИМТ: " << (man->weight) / (man->height * man->height) << "\n";
}

int main()
{
    Array* array0 = new Array;
    array0->add(new Sportsman{"Belarus","Kuptsevich Andrey Vladimirovich",17,1.70,57,1});
    array0->add(new Sportsman{"Litva","Ivanov Ivan Ivanovich",18,1.80,68,2});
    for (Array* a = array0; a != NULL; a = a->next)
    {
        print(a->value);
    }
    cout << "-------------------------------";
    delete array0->next->value;
    array0->next->del();
    for (Array* a = array0; a != NULL; a = a->next)
    {
        print(a->value);
    }
    cout << "-------------------------------";
    array0->addAfter(new Sportsman{"Germany","Volf Fon Derlain",18,1.80,68,2 });
    array0->next->addBefore(new Sportsman{ "Polsha","Litvinchuk Gleb Michalovich",19,1.89,78,4 });
    for (Array* a = array0; a != NULL; a = a->next)
    {
        print(a->value);
    }
    return 0;
}

