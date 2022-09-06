#include <iostream>
using namespace std;

int main()
{
    const int n = 200;
    int mas[n] = {0};
    
    for(int i = 0; i < n; i++)
    {
        mas[i] = mas[i] + (10*i);
        cout << mas [i] << ' ';
    }


}
