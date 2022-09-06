#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    int *mas = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        mas[i] = 0 + rand() % 101;
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(mas[j] < mas[j + 1])
            {
                int t = mas[j + 1];
                mas[j + 1] = mas[j];
                mas[j] = t;
            }
        }
    }
    
    cout << "sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << ' ';
    }
    
    cout << endl;
    delete [] mas;
    
    return 0;
}
