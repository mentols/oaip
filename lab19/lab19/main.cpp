#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    ofstream file;
    file.open("\\Users\\ilyapilipchuk\\Documents\\лабы_ОАиП\\lab19\\lab19\\tuna.txt");
    if(file.is_open())
    {
       file << "I love tuna and tuna loves me!\n";
        file.close();
    }
    else
       cout<< "No file has been created!\n";

    
    
    cout << "end" << endl;
    return 0;
}
