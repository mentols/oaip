#include <iostream>
#include <fstream>

using namespace std;

struct avto
{
    int year; // дата издания
    double mileage; // количество страниц
    bool registered; // наличие регситрации
    char titles[3]; // буквы номера
    int numbers[4]; // числа номера
};

void print(int, double, bool, char titles[3], int numbers[4]);
void getAvto(avto*);

int main() {
    int choose;
    do
    {
        cout << "1 - Ввести обзац текста до 100 символов\n2 - Чтение обзаца\n3 - Ввести массив типа int\n4 - Чтение массива типа int\n5 - Ввести структуру\n6 - Чтение структуры\n7 - Выйти\nНомер: ";
        cin >> choose;
        switch (choose)
        {
            case 1:
            {
                char s[100];
                cin.ignore();
                cout << "\nВведите строку до 100 символов: ";
                cin.getline(s,100);
                ofstream file("/Users/ilyapilipchuk/Documents/лабы_ОАиП/lab20/lab20/file_1.txt", ios::out | ios:: trunc);
                if (!file)
                {
                    cout << "Запуск не удался" << endl;
                    break;
                }
                for (int i = 0; s[i] != NULL; i++)
                {
                    file << s[i];
                }
                file.close();
                break;
            }
                
            case 2:
            {
                ifstream file("/Users/ilyapilipchuk/Documents/лабы_ОАиП/lab20/lab20/file_1.txt", ios::in);
                if (!file)
                {
                    cout << "Запуск не удался" << endl;
                    break;
                }
                char c;
                file >> c;
                while(!file.eof())
                {
                    cout << c;
                    file >> c;
                }
                file.close();
                cout << endl;
                break;
            }
        
        case 3:
        {
            cout << "\nВведите размерность массива: ";
            int n;
            cin >> n;
            ofstream file("/Users/ilyapilipchuk/Documents/лабы_ОАиП/lab20/lab20/file_2.txt", ios::out | ios:: trunc);
            if (!file)
            {
                cout << "Запуск не удался" << endl;
                break;
            }
            cout << "Введите эллемент: ";
            for (int i = 0; i < n; i++)
            {
                int buf;
                cin >> buf;
                file << buf << ':';
            }
            file.close();
            break;
        }
            
        case 4:
        {
            ifstream file("/Users/ilyapilipchuk/Documents/лабы_ОАиП/lab20/lab20/file_2.txt", ios::in);
            if (!file)
            {
                cout << "Запуск не удался" << endl;
                break;
            }
            int x = 0;
            char c;
            file >> x >> c;
            while(!file.eof())
            {
                cout << x << ' ' << c << ' ';
                file >> x >> c;
                
            }
            file.close();
            cout << endl;
            break;
        }
        case 5:
        {
            avto car = {0000, 0.0, true, "AA", 1111};
            getAvto(&car);
            ofstream file("/Users/ilyapilipchuk/Documents/лабы_ОАиП/lab20/lab20/file_3.txt", ios::out | ios::app);
            if (!file)
            {
                cout << "Запуск не удался" << endl;
                break;
            }
            
            file << car.year << ' ' << car.mileage << ' ' << car.registered << ' ' << car.numbers[0] << car.numbers[1] << car.numbers[2] << car.numbers[3] << ' ' << car.titles << endl;
            file.close();
            cout << "\n\n";
            break;
        }
            case 6:
        {
            avto car;
            ifstream file("/Users/ilyapilipchuk/Documents/лабы_ОАиП/lab20/lab20/file_3.txt", ios::in);
            if (!file)
            {
                cout << "Запуск не удался" << endl;
                break;
            }
            //file >> car.year >> car.mileage >> car.registered >> car.numbers >> car.titles;
            while (!file.eof())
            {
                //cout << car.year << car.mileage << car.registered  << car.numbers << car.titles;
                //file >> car.year >> car.mileage >> car.registered >> car.numbers >> car.titles;
            }
                
            file.close();
            cout << endl;
            break;
        }
        
        case 7: break;
            
        default:
            cout << "Неправильный выбор, повторит ещё";
            break;
        }
        
    } while (choose != 7);
    return 0;
}

void print(int year, double mileage, bool registered, char titles[3], int numbers[4])
{
    const char* q1 = registered == true ? "состоит" : "не состоит";
    cout << "Машина " << year << " года " << mileage << "км пробега, на учёте " << q1 << " регистрационный номер машины: " << numbers[0] << numbers[1] << numbers[2] << numbers[3]  << '-' << titles[0] << titles[1] << endl;
}
void getAvto(avto* car)
{
    cout << "Введите пробег: ";
    cin >> car->mileage ;
    cout << "Введите год машины: ";
    cin >> car->year ;
    cout << "Введите буквы номера(2 шт.): ";
    for (int j = 0; j < 2; j++)
    {
        cout << j + 1 << " буква: ";
        cin >> car->titles[j];
    }
    cout << "Введите цифры номера (4 шт.)\n";
    for (int j = 0; j < 4; j++)
    {
        cout << j + 1 << " цифра: ";
        cin >> car->numbers[j];
    }
    cout << "Автомобиль состоит на учёте (1 - да 0 - нет): ";
    int q;
    cin >> q;
    car->registered = q == 1 ? true : false;
}
