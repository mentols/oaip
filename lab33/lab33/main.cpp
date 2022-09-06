#include <iostream>

void swap(double* a, int i, int j) {
    int s = a[i];
    a[i] = a[j];
    a[j] = s;
}

bool nextSet(double* a, int n ) {
    int i = n - 2;
    while (i != -1 && a[i] >= a[i + 1]) {
        i--;
        
    }
    if (i == -1) {
        return false;
    }
    int j = n - 1;
    while (a[i]>=a[j]) {
        j--;
    }
    swap(a, i, j);
    int l = i + 1;
    int r = n - 1;
    while (l < r) {
        swap(a, l++, r--);
    }
    return true;
}

void print(double* a, int n ) {
    for (int i = 0; i < n;i++) {
        std::cout << " " << a[i];
    }
}

int main() {
    std::cout << "Введите количество элементов перерстановки: ";
    int n;
    std::cin >> n;
    double* a = new double[n];
    if (a == NULL) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    int i = 1;
    while (nextSet(a,n)) {
        std::cout << i << ") \t";
        print(a, n);
        std::cout << "\n";
        i++;
    }
    delete[] a;
    return 0;
}
