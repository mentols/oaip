#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class SborInf
{
public:
    string SurName;
    int Mon;
    int Tue;
    int Wed;
    int Thu;
    int Fri;
    int Sat;
    int all;
    int Key;
    SborInf(string f, int mon, int tue, int wed, int thue, int fri, int sat, int allk)
    {
        this->SurName = f;
        this->Mon = mon;
        this->Tue = tue;
        this->Wed = wed;
        this->Thu = thue;
        this->Fri = fri;
        this->Sat = sat;
        this->all = allk;
    }
    SborInf()
    {
        this->SurName = "";
        this->Mon = NULL;
        this->Tue = NULL;
        this->Wed = NULL;
        this->Thu = NULL;
        this->Fri = NULL;
        this->Sat = NULL;
    }

    bool IsEmpty()
    {
        if (this->SurName == "" &&
            this->Mon == NULL &&
            this->Tue == NULL &&
            this->Wed == NULL &&
            this->Thu == NULL &&
            this->Fri == NULL &&
            this->Sat == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void EnterData()
    {
        cout << "Введите фамилию: ";
        cin >> this->SurName;
        cout << "Введите сумму в понедельник: ";
        cin >> this->Mon;
        cout << "Введите сумму во вторник: ";
        cin >> this->Tue;
        cout << "Введите сумму в среду: ";
        cin >> this->Wed;
        cout << "Введите сумму в четверг: ";
        cin >> this->Thu;
        cout << "Введите сумму в пятницу: ";
        cin >> this->Fri;
        cout << "Введите сумму в субботу: ";
        cin >> this->Sat;
        all = Mon + Tue + Wed + Thu + Fri + Sat;
    }

    void Clear()
    {
        this->SurName = "";
        this->Mon = NULL;
        this->Tue = NULL;
        this->Wed = NULL;
        this->Thu = NULL;
        this->Fri = NULL;
        this->Sat = NULL;
    }

    void Print()
    {
        cout << "Фамилия: " << this->SurName << "\n" << "Сумма за неделю: " << this->all << "\nключ - " << this->Key << std::endl;
    }
};

class HashTable {
public:
    vector<SborInf> Container;
    size_t Size;

    HashTable()
    {
        cout << "Введите размер новой хеш-таблицы: ";
        cin >> this->Size;
        Container = std::vector<SborInf>(Size);
    }

    int HashFunction(std::string SurName, int key_hesh, int coutofsymbolcode, int Key) {
        int size = pow(10, Size);
        int hesh_code, tmp_hesh = 0;
        for (size_t i = 0; i < SurName.length(); i++)
        {
            tmp_hesh += (int)pow(key_hesh, i) * (int)(SurName[i]);
            tmp_hesh = tmp_hesh % size;
        }
        hesh_code = tmp_hesh % size;
        return hesh_code;
    }

    void AddElement(SborInf Data, std::string SurName, int key_hesh, int coutofsymbolcode, int Key)
    {
        Data.Key = Key;
        Container[HashFunction(SurName, key_hesh, coutofsymbolcode, Key)] = Data;
    }

    void DelElement(std::string SurName, int key_hesh, int coutofsymbolcode, int Key)
    {
        Container[HashFunction(SurName, key_hesh, coutofsymbolcode, Key)].Clear();
    }

    void ChangeElement(std::string SurName, int key_hesh, int coutofsymbolcode, int Key)
    {
        Container[HashFunction(SurName, key_hesh, coutofsymbolcode, Key)].EnterData();
    }

    SborInf FindElement(std::string SurName, int key_hesh, int coutofsymbolcode, int Key)
    {
        return Container[HashFunction(SurName, key_hesh, coutofsymbolcode, Key)];
    }

    void PrintTable()
    {
        size_t n = 0;
        for (SborInf N : Container)
        {
            if (!N.IsEmpty())
            {
                cout << "Элемент " << n << ":\n" << "Фамилия: " << N.SurName << "\n" << "Сумма за неделю: " << N.all << "\n" << std::endl;
            }
            else
            {

            }
            n++;
        }
    }

    unsigned int Hash(string fam, int key_hesh, int coutofsymbolcode, int Key) {
        unsigned int size = pow(10, coutofsymbolcode);
        unsigned long long int hesh_code, tmp_hesh = 0;
        for (size_t i = 0; i < fam.length(); i++)
        {
            tmp_hesh += (int)pow(key_hesh, i) * (int)(fam[i]);
            tmp_hesh = tmp_hesh % size;
        }
        hesh_code = tmp_hesh % size;
        return hesh_code;
    }
};

int main() {
    HashTable Table;
    bool menu = true;
    int choose;
    int Key;
    int key_hesh = 11;
    int coutofsymbolcode = 9;
    SborInf tmp;
    string fam;
    string SurName;
    while (menu) {
        cout << "Меню:\n1)Добавить элемент в таблицу\n2)Удалить элемент\n3)Распечатать хеш-таблицу\n4)Изменить элемент\n5)Найти элемент\n6)Посмотреть хеш\nДругой вариант: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            {
                cout << "Введите ключ: ";
                cin >> Key;
                tmp.EnterData();
                Table.AddElement(tmp, SurName, key_hesh, coutofsymbolcode, Key);
                break;
            }
        case 2:
            {
                cout << "Введите ключ: ";
                cin >> Key;
                Table.DelElement(SurName, key_hesh, coutofsymbolcode, Key);
                break;
            }
        case 3:
            {
                Table.PrintTable();
                break;
            }
        case 4:
            {
                cout << "Введите ключ: ";
                cin >> Key;
                Table.ChangeElement(SurName, key_hesh, coutofsymbolcode, Key);
                break;
            }
        case 5:
            {
                cout << "Введите ключ: ";
                cin >> Key;
                Table.FindElement(SurName, key_hesh, coutofsymbolcode, Key).Print();
                break;
            }
        case 6:
            {
                cout << "Введите ключ: ";
                cin >> Key;
                cout << "Введите фамилию: ";
                cin >> SurName;
                cout << Table.HashFunction(SurName, key_hesh, coutofsymbolcode, Key);
                break;
            }
            default:
            {
                menu = false;
                break;
            }
        }
    }
    return 0;
}
