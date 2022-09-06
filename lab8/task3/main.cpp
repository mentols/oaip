#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n, k = 0, max;
    
    cout << "Enter n: ";
    cin >> n;
    
    int *mas = new int[n];
    int *max_in_mas = new int[n];
    
    if (mas == NULL || max_in_mas == NULL)
    {
        cout << " No memory" << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]: ";
        cin >> mas[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            if((mas[i] < mas[i + 1]) && (mas[i] < mas[n - 1]))
            {
                max_in_mas[k] = mas[i];
                k++;
            }
        }
        else if (i == n)
        {
            if((mas[i] < mas[0]) && (mas[i] < mas[i - 1]))
            {
                max_in_mas[k] = mas[i];
                k++;
            }
        }
        else
        {
            if((mas[i] < mas[i - 1]) && (mas[i] < mas[i + 1]))
            {
                max_in_mas[k] = mas[i];
                k++;
            }
        }
    }
    
    max = max_in_mas[0];
    for (int i = 0; i < k; i++)
    {
        if (max < max_in_mas[i])
        {
            max = max_in_mas[i];
        }
    }
    
    cout << max << endl;
    
    delete [] mas;
    delete [] max_in_mas;
    mas = NULL;
    max_in_mas = NULL;
    
    return 0;
}
