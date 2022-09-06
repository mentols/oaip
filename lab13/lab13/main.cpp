#include <iostream>
using namespace std;

void sortd(char*, int);


int main()
{
    const int n1 = 5;
    const int n2 = 5;
    char str1[n1];
    char str2[n2];
    char str3[n1 + n2];
    
    cout << "enter str 1: ";
    cin.getline(str1, n1);
    cout << "enter str 2: ";
    cin.getline(str2, n2);
    
    sortd(str1, n1);
    sortd(str2, n2);
    
    strncpy(str3, str1, n1+n2);
    strcat(str3, str2);
    
    sortd(str3, strlen(str3));
    
    
    
    cout << str1 << endl << str2 << endl << str3 << endl;
    
    return 0;
}

void sortd(char* str, int n)
{
    for (int i = 0; i < n; i++)
    {
        int ind = i;
        for (int j = 0; j < n; j++)
        {
            if (str[i] == str[j] && ind != j)
            {
                str[j] = ' ';
            }
        }
    }
}


