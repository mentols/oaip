#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    const int m = 26, n = 10;
    double mas[m][n];
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mas[i][j] = - 70 + rand() % 101;
        }
    }
    cout << "Show reverse array:" << endl;
    for(int i = m - 1; i >= 0; i--)
    {
        for(int j = n - 1; j >= 0; j--)
        {
            cout << mas[i][j] << " ; ";
        }
        cout << endl;
    }
    
    return 0;
}
