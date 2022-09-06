#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Введите количество элементов:\n";
    int n;
    cin >> n;
    int* s = new int[n];
    int* a = new int[n];
    if (a == NULL || s == NULL)
    {
        return 0;
    }
    cout << "Введите элементы:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        a[i] = i;
    }
    int k = pow(2, n);
    for (int i = 0; i < k; i++)
    {
        cout << i << ")\t";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))//if( i & (pow(2, j))
            {
                cout << s[a[j]]<<" ";
            }
        }
        cout << "\n";
    }
    delete[] a;
    return 0;
}
