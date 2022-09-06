#include <iostream>
using namespace std;

int a(char*);
void b(char*);

int main(int argc, const char * argv[])
{
    int choose;
    
    cout << "choose task (1 or 2): ";
    cin >> choose;
    
    char str[] = {"So she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid, whether the pleasure of making a daisy-chain would be worth the trouble of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her."};
    
    switch (choose)
    {
        case 1:
        {
            int count = 0;
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] == ' ')
                {
                    count++;
                }
            }
            cout << str << endl << "spaces in text: " << count << endl;
            break;
        }
        case 2:
        {
            unsigned long int lenstr = strlen(str);

            for (int i = 0; i < lenstr; i++)
            {
                if (str[i] == ',' || str[i] == '.')
                {
                    str[i] = ' ';
                }
            }
            
            cout << "words less then 5 sumbuls: " << a(str) << endl;
            cout << "the shortest word with 'd' in and is: ";
            b(str);
            break;
        }
    }
    
    
    return 0;
}


int a(char *str)
{
    int clf = 0, clf0 = 0 ;
    unsigned long int lenstr = strlen(str);
    char str0, str1;
    int ls = 0;
    
    
    for (int i = 0; i < lenstr; i++)
    {
        
        
        if (str[i] == ' ')
        {
            if (ls < 5)
            {
                clf++;
            }
            ls = 0;
            str0 = str1;
        }
        else
        {
            str0 += str[i];
            ls++;
        }
        
    }
    return  clf;
}

void b(char *str)
{
    int m = strlen(str) + 1;
    char *w = NULL;
     
    char *p = strtok(str, ' ');
    while (p != NULL)
    {
        int len = strlen(p);
        if (p[len - 1] == 'd')
        {
            m = len;
            w = p;
        }
        p = strtok(NULL, ' ');
    }
     
    if (w != NULL)
    {
        cout << ww << endl;
    }
    else
    {
        cout << "not found\n";
    }
}
