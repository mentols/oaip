#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    const int m = 2, n = 3;
    char mas[m][n] = {'!', '@', '#', '%', '&', '*'};
    
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "| " << mas[i][j] << " | ";
        }
    cout << endl;
    }
    return 0;
}
