#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    int n = 10, nul = 0, imin = 0;
    
    double *mas = new double[n] {3.24, 0, 2.28, 0, -3.22, 0, 2.88, -3.20, 0, 0};
    double min = mas[0], sum = 0;
    
    //task1
    for (int i = 0; i < n; i++)
    {
        if(mas[i] == 0)
        {
            nul++;
        }
    }
    
    //task2
    for (int i = 0; i < n; i++)
    {
        if(min > mas[i])
        {
            min = mas[i];
            imin = i;
        }
    }
    for (int i = imin + 1; i < n; i++)
    {
        sum += mas[i];
    }
    cout << sum << endl;
    
    //task3
    for (int i = 0; i < n; i++)
    {
        mas[i] = abs(mas[i]);
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (mas[j] > mas[j + 1])
            {
                double t = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = t;
            }
        }
    }
    
    cout << "Атсортированный возростающий массив со значениями по мудулю массив" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "] = " << mas[i] << endl;
    }
    
    return 0;
}
