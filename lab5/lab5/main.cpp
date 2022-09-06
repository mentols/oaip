#include <iostream>
using namespace std;

int sum(int *mas, int n, int rez)
{
    if (n == 0)
    {
        return rez;
    }
    else
    {
        if (mas[n] < 0)
        {
            rez += mas[n];
        }
        
        return sum(mas, n - 1, rez);
    }
    
}

int main()
{

    int x = 3, rez = 0;
    
    int mas[x];
    for (int i = 0; i < x; i++)
    {
        cout << "enter mas" << i;
        cin >> mas[i];
    }
    cout << sum(mas, x, rez) << endl;
    return 0;
}
