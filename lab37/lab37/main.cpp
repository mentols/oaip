#include <iostream>
#include <list>

int main() {
    srand(time(NULL));
    system("chcp 1251");
    std::list<int> l;
    std::cout << "������� ������ ������: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        l.push_back(rand());
        
    }
    std::cout << "��������� ������:\n";
    int max = l.front();
    for (auto i = l.begin(); i!=l.end() && !l.empty(); i++) {
        std::cout << *i << " ";
        if (max < *i) {
            max = *i;
        }
    }
    std::cout << "\n";
    for (auto i = l.begin(); i != l.end() && !l.empty(); ) {
        if (max == *i) {
            break;
        }
        auto b = i;
        i++;
        l.erase(b);
    }
    
    std::cout << "������ � ���������� �������� �������:\n";
    for (auto i = l.begin(); i != l.end() && !l.empty(); i++) {
        std::cout << *i << " ";
    }
    std::cout << "\n";
    system("pause");
    return 0;
}
