#include <iostream>
using namespace std;

struct avto
{
    int year; // дата издания
    double mileage; // количество страниц
    bool registered; // наличие регситрации
    char titles[3]; // буквы номера
    int numbers[4]; // числа номера
};

double** create_arr(int, int); // создание динамического массива
void print_din_mass(double**, int, int); // печать динамического массива
void initialize(double**, int, int); // будем передавать динамический массив и размерность в качестве параметра
void up_sort_1(double**, int, int); // сортировка двумерного массива пузырьком по возростанию
void up_sort_2(avto*, int); // сортировка структуры шеллом
void print_struct(avto*, int); // печать массива структур
int MinimumFrom(int*, int, int);
void down_sort_1(int*, int);
void down_sort_2(char*, int);


int main()
{
    const int n = 10000;
    srand(time(NULL));
    int global_choose, choose, sort_choose, array_2_char, array_2_int, array_3_double_M, array_3_double_N, array_4_struct;
    double** array_double_3;
    char array_char_2[n];
    int array_int_2[n];
    cout << "Добро пожаловать" << endl;
    while (true)
    {
        cout << "Выберите (1 - Начать | 0 - Закончить): ";
        cin >> global_choose;
        if (global_choose == 1)
        {
            cout << "1 - создать массив символьного(char) типа\n2 - создать массив целого(int) типа\nНомер: ";
            cin >> choose;
            if (choose == 1)
            {
                cout << "Введите размерность массива символьного типа: ";
                cin >> array_2_char;
                for (int i = 0; i < array_2_char; i++)
                {
                    array_char_2[i] = 65 + rand() % 25;
                    cout << array_char_2[i] << ' ';
                }
                cout << endl;
            }
            else if (choose == 2)
            {
                cout << "Введите размерность массива символьного типа: ";
                cin >> array_2_int;
                for (int i = 0; i < array_2_int; i++)
                {
                    array_int_2[i] = 0 + rand() % -101;
                    cout << array_int_2[i] << ' ';
                }
                cout << endl;
            }
            else
            {
                cout << "Незвестный выбор, повторите ещё" << endl;
            }
            //
            do
            {
                cout << "Введите количество столбцов двумерного массива вещественного типа(0 < n < 100): ";
                cin >> array_3_double_M;
            }
            while (array_3_double_M < 1 && array_3_double_M > 101);
            do
            {
                cout << "Введите количество строк двумерного массива вещественного типа(0 < n < 100): ";
                cin >> array_3_double_N;
            }
            while (array_3_double_N < 1 && array_3_double_N > 101);
            array_double_3 = create_arr(array_3_double_M, array_3_double_N);
            initialize(array_double_3, array_3_double_M, array_3_double_N);
            cout << "Введите размерность массива структур(по полю год автомобиля): ";
            cin >> array_4_struct;
            avto car[array_4_struct];
            for (int i = 0; i < array_4_struct; i++)
            {
                car[i].year = 1980 + rand() % 43;
                cout << car[i].year << ' ';
            }
            
            cout  << "\n1 - сортировка двумерного массива по возростанию\n2 - сортировка структуры(год авто) по возростанию\n3 - сортировка одномерного массива (int) по убыванию\n4 - сортировка одномерного массива (char) по убыванию\nНомер: ";
            cin >> sort_choose;
            switch (sort_choose)
            {
                case 1:
                {
                    cout << "Вывод массива до сортировки:" << endl;
                    print_din_mass(array_double_3, array_3_double_N, array_3_double_M);
                    up_sort_1(array_double_3, array_3_double_N, array_3_double_M);
                    cout << "Вывод массива после сортировки:" << endl;
                    print_din_mass(array_double_3, array_3_double_N, array_3_double_M);
                    break;
                }
                case 2:
                {
                    cout << "Вывод массива до сортировки:" << endl;
                    print_struct(car, array_4_struct);
                    up_sort_2(car, array_4_struct);
                    cout << "Вывод массива после сортировки:" << endl;
                    print_struct(car, array_4_struct);
                    break;
                }
                case 3:
                {
                    cout << "Вывод массива до сортировки:" << endl;
                    for (int i = 0; i < array_2_int; i++)
                    {
                        cout << array_int_2[i] << ' ';
                    }
                    down_sort_1(array_int_2, array_2_int);
                    cout << "Вывод массива после сортировки:" << endl;
                    for (int i = 0; i < array_2_int; i++)
                    {
                        cout << array_int_2[i] << ' ';
                    }
                    cout << endl;
                    break;
                }
                case 4:
                {
                    cout << "Вывод массива до сортировки:" << endl;
                    for (int i = 0; i < array_2_char; i++)
                    {
                        cout << array_char_2[i] << ' ';
                    }
                    down_sort_2(array_char_2, array_2_char);
                    cout << "Вывод массива после сортировки:" << endl;
                    for (int i = 0; i < array_2_char; i++)
                    {
                        cout << array_char_2[i] << ' ';
                    }
                    cout << endl;
                    break;
                }
                default:
                {
                    cout << "Незвестный выбор, повторите ещё" << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < array_3_double_N; i++)
            {
                delete [] array_double_3[i];
            }
            delete [] array_double_3;
            cout << "Досвидания !" << endl;
            return 0;
        }
    }
    return 0;
}

double** create_arr(int m, int n) // Функция создания двумерного массива
{
    double **mas = new double* [m];
    if (mas == NULL)
    {
        cout << "try again latter..." << endl;
    }
    
    for (int i = 0; i < m; i++)
    {
        mas[i] = new double[n];
        if (mas[i] == NULL)
        {
            cout << "error" << endl;
            for (int j = 0; j < i; j++)
            {
                delete [] mas[j];
            }
            delete [] mas;
            mas = NULL;
        }
    }
    return mas;
}
void print_struct(avto* m, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << m[i].year << ' ';
    }
    cout << endl;
}
void print_din_mass(double** mas, int m, int n)// Функция печати двумерного массива
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mas[i][j] << ' ';
        }
        cout << endl;
    }
}
void initialize(double** mas, int n, int m)// Функция заполнения двумерного массива
{
    for(int i = 0; i < n; i++ )
    {
        for(int j = 0;  j < m;  j++ )
        {
            mas[i][j] = -100 + rand() % 201 ;
            cout << mas[i][j] << ' ';
        }
    cout << endl;
    }
}
void up_sort_1(double** mas, int n, int m) // сортировка двумерного массива выбором по возростанию
{
    int pos;
    double tmp;
    for (int i = 0; i < m; i++) // цикл по строкам
    {
       for (int k = 0; k < n; k++) // k - номер текущего шага
       {
            pos = k;
            tmp = mas[i][pos];
            for (int j = k + 1; j < n; j++) // цикл выбора наименьшего элемента
            {
                if (mas[i][j] < tmp)
                {
                    pos = j;
                    tmp = mas[i][j];
                }
            }
            mas[i][pos] = mas[i][k];
            mas[i][k] = tmp;
        }
    }
}
void up_sort_2(avto* m, int lenght)
{
    int count = 0;
    for (int i = lenght / 2;i > 0; i = i / 2)
    {
        for (int j = 0; j < lenght - i; j++)
        {
            for (int k = j; k > -1; k = k - i)
            {
                if (m[k].year > m[k + 1].year)
                {
                    avto t = m[k];
                    m[k] = m[k + 1];
                    m[k + 1] = t;
                    count ++;
                }
            }
        }
    }
}
int MinimumFrom(int* mas, int position, int lenght)
{
    int minIndex = position;
    for (int i = position + 1; i < lenght; i++)
    {
        if (mas[i] < mas[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}
void down_sort_1(int* mas, int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        swap(mas[i], mas[MinimumFrom(mas, i, lenght)]);
    }
}
void down_sort_2(char* mas, int lenght)
{
    for (int i = 0; i < lenght - 1; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            if (mas[j] < mas[j + 1])
            {
                swap(mas[j + 1], mas[j]);
            }
        }
    }
}
