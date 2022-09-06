#include <iostream>
using namespace std;

bool cearch(char arr[], int n, char sumbol)
{
    bool rezult = false;
    for (int i = 0; i < n; i++)
    {
        arr[i] = tolower(arr[i]);
        if(arr[i] == sumbol)
        {
            rezult = true;
            break;
        }
        else
        {
            rezult = false;
        }
    }
    return rezult;
}

int main(int argc, const char * argv[])
{
    int choose;
    
    cout << "choose task (1 or 2): ";
    cin >> choose;
    
    switch (choose)
    {
        case 1:
        {
            const int n = 100;
            char mas[n];
            char sumb;
            bool rez;
            
            cout << "enter string less then 100 sumbols: ";
            cin.ignore();
            cin.getline(mas, 100);
            
            cout << "enter sumbol for surch: ";
            cin >> sumb;
            
            rez = cearch(mas, n, sumb);
            if (rez == 0)
            {
                cout << "Not in array" << endl;
            }
            else
            {
                cout << "In array" << endl;
            }
            
            for (int i = 0; i < n; i++)
            {
                cout << mas[i];
                if (mas[i] == '\0')
                {
                    cout << endl;
                    break;
                }
            }
            
            break;
        }
        case 2:
        {
            const int n = 250, s = 50;
            char sumb[s];
            char str[n];
            
            cin.ignore();
            cout << "enter text string:\n";
            cin.getline(str, n);
            cout << "enter string for split: ";
            cin.getline(sumb, s);
            
            char* p = strtok(str, sumb);
            while (p != NULL)
            {
                cout << p << endl;
                p = strtok(NULL, sumb);
            }
            
        }
        
        
        default:
        {
            cout << "unknown task" << endl;
            break;
        }
    }
    
    
    return 0;
}
