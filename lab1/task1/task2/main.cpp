#include <iostream>
#include <string>
using namespace std;
    /*string date = "38.16.2022";
    int int_date = 0;
    
    
    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 4);
    int int_day = stoi(day);
    int int_month = stoi(month);
    int int_year = stoi(year);
    
    int_date = int_day + int_month*100 + int_year*10000;
    cout << "Int date: " << int_date << endl;
    cout << "day: " << (int_date / 100) % 100 << endl;
    cout << "month: " << (int_date % 100)  << endl;
    cout << "year: " << (int_date / 10000)  << endl;
    return 0;
    
    // current date/time based on current system
    time_t now = time(0);

    cout << "Number of sec since January 1,1970 is:: " << now << endl;

       tm *ltm = localtime(&now);

       // print various components of tm structure.
    cout << "Year:" << 1900 + ltm->tm_year<<endl;
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<< ltm->tm_mday << endl;
    cout << "Time: "<< 5+ltm->tm_hour << ":";
    cout << 30+ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    cout << ltm << endl;
    
     */

#include <ctime>

int main()
{
    string date = "38.16.2022";
    int int_date = 0;
    
    
    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 4);
    int int_day = stoi(day);
    int int_month = stoi(month);
    int int_year = stoi(year);
    
    int_date = 15062022;
    cout << "Int date: " << int_date << endl;
    cout << "month: " << (int_date / 1000000)  << endl;
    cout << "day: " << (int_date / 10000) % 100 << endl;
    cout << "year: " << (int_date % 10000)  << endl;
    
    return 0;
    return 0;
}
    

