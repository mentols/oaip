#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char * argv[])
{
    set <int> s;
    if (s.empty() == true)
    {
        cout << "Множество пустое" << endl;
    }
    else
    {
        cout << "Множество НЕ пустое" << endl;
    }
    cout << s.size() << ' ' << s.max_size() << endl;
    
    int n, x;
    cout << "Сколько элементов введёшь ?: ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    
    long int f = 576460752303423487;
    n = 0;
    while (f > 0)
    {
        f = f / 10;
        n++;
    }
    cout << f << ' ' << n << endl;
    return 0;
}
