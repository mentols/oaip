#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    const int m = 2, n = 3;
    double mas[m][n];
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }
    cout << "Print array:" << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << mas[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
