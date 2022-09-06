#include <iostream>
using namespace std;


struct aeroflot
{
    char arrival[30];
    int flight_number[3];
    char type;
    int ticket_price;
};
// print
void print(aeroflot* plane, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            cout << plane[i].arrival[j];
        }
        cout << ' ';
        cout << plane[i].ticket_price << '\n';
    }
    cout << endl;
}
// сортировка места прибытия по возростанию
void ArrivalShell(aeroflot* m, int lenght)
{
    for (int i = lenght / 2;i > 0; i = i / 2)
    {
        for (int j = 0; j < lenght - i; j++)
        {
            for (int k = j; k > -1; k = k - i)
            {
                if (strcmp(m[k].arrival, m[k + 1].arrival) < 0)
                {
                    aeroflot t = m[k];
                    m[k] = m[k + 1];
                    m[k + 1] = t;
                }
            }
        }
    }
}
int ArrivalMinimumFrom(aeroflot* mas, int position, int lenght)
{
    int minIndex = position;
    for (int i = position + 1; i < lenght; i++)
    {
        if (strcmp(mas[i].arrival, mas[minIndex].arrival) > 0)
        {
            minIndex = i;
        }
    }
    return minIndex;
}
void ArrivalSelectionSort(aeroflot* mas, int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        swap(mas[i], mas[ArrivalMinimumFrom(mas, i, lenght)]);
    }
}


void PriceShell(aeroflot* m, int lenght)
{
    int count = 0;
    for (int i = lenght / 2;i > 0; i = i / 2)
    {
        for (int j = 0; j < lenght - i; j++)
        {
            for (int k = j; k > -1; k = k - i)
            {
                if (m[k].ticket_price < m[k + 1].ticket_price)
                {
                    aeroflot t = m[k];
                    m[k] = m[k + 1];
                    m[k + 1] = t;
                    count ++;
                }
            }
        }
    }
}
int PriceMinimumFrom(aeroflot* mas, int position, int lenght)
{
    int minIndex = position;
    for (int i = position + 1; i < lenght; i++)
    {
        if (mas[i].ticket_price > mas[minIndex].ticket_price)
        {
            minIndex = i;
        }
    }
    return minIndex;
}
void PricelSelectionSort(aeroflot* mas, int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        swap(mas[i], mas[PriceMinimumFrom(mas, i, lenght)]);
    }
}

int b_search(aeroflot* mas, int lenght, int x)
{
    int low = 0, height = lenght - 1, middle = (low + height) / 2;
    while (height >= low)
    {
        if (mas[middle].ticket_price == x)
        {
            return middle;
        }
        else
        {
            if (x > mas[middle].ticket_price)
            {
                low = middle + 1;
            }
            else
            {
                height = middle - 1;
            }
            middle = (low + height) / 2;
        }
    }
    return -1;
}


int main(int argc, const char * argv[])
{
    const int n = 6;
    int choose;
    aeroflot* plane = new aeroflot[n];
    plane[0] = {{"Минск"}, {8, 4, 5}, 'A', 250};
    plane[1] = {{"США"}, {3, 4, 1}, 'A', 999};
    plane[2] = {{"Гонконг"}, {9, 0, 2}, 'B', 770};
    plane[3] = {{"Ямантау"}, {7, 6, 4}, 'C', 340};
    plane[4] = {{"Сети"}, {4, 8, 0}, 'A', 550};
    plane[5] = {{"Брест"}, {2, 0, 9}, 'C', 170};


    PriceShell(plane, n);
    //print(plane, n);
    ArrivalSelectionSort(plane, n);
    //print(plane, n);
    PricelSelectionSort(plane, n);
    //print(plane, n);
    //ArrivalShell(plane, n);
    //print(plane, n);
    
    print(plane, n);
    cout << "Введите цену для поиска в массиве: ";
    cin >> choose;
    int r = b_search(plane, n, choose);
    if (r < 0)
    {
        cout << "Искомое значение " << choose << " в массиве не найдено, массив будет отсортирован" << endl;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (plane[j].ticket_price > plane[j + 1].ticket_price)
                {
                    swap(plane[j], plane[j + 1]);
                }
            }
        }
        print(plane, n);
        int k = b_search(plane, n, choose);
        if (k < 0)
        {
            cout << "Такого значения нет в списке" << endl;
        }
        else
        {
            cout << "Искомое значение " << choose << " в массиве  найдено с индексом [" << k << ']' << endl;
        }
    }
    else
    {
        cout << "Искомое значение " << choose << " в массиве  найдено с индексом [" << r << ']' << endl;
    }
    return 0;
}
