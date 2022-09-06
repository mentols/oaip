#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    int n, sum = 0;
    cout << "enter array size: ";
    cin >> n;
    
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]: ";
        cin >> mas[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(mas[i] == 0)
        {
            for (int j = i; j < n; j++)
            {
                sum += abs(mas[j]);
            }
        }
        
    }
    
    cout << "summ is: " << sum << endl;
    
    delete [] mas;
    return 0;
}
