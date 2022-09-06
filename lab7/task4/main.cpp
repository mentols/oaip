#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    const int m = 18, n = 7;
    int mas[m][n];
    int v = -999;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mas[i][j] = v;
            v += 11;
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
    
    cout << "Print new array:" << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mas[i][j] += 555;
            cout << mas[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
