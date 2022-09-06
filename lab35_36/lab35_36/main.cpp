#include <iostream>
#include <queue>

using namespace std;

void printgrav(int** grav, int n) {
for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grav[i][j] << " ";
        }
        cout << endl;
    }
}

void dfsDeep(int** grav,bool* visited,int start,int n,int k) {
    bool dell = false;
    if (visited == nullptr) {
        visited = new bool[n];
        for (int i = 0; i < n;i++) {
            visited[i] = false;
        }
        dell = true;
    }
    if (start+1==k) {
        cout <<"(" << start + 1 << ") ";
    }
    else {
        cout << start + 1 << " ";
    }
    visited[start] = true;
    for (int i = 0; i < n;i++) {
        if ((grav[start][i]!=0) && (!visited[i])) {
            dfsDeep(grav, visited, i, n,k);
        }
    }
    if (dell) {
        delete[] visited;
    }
    return;
}

void dfsWeight(int** grav, queue<int> q , int n, int k) {
    
    bool* visited;
    
    
    visited = new bool[n];
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }
    
    while (!q.empty()) {
        int index = q.front();
        q.pop();
        visited[index] = true;
        for (int j = 0; j < n;j++) {
            if (grav[index][j]==1 && visited[j]!=1) {
                q.push(j);
                visited[j] = true;
            }
        }
        if (index + 1 == k) {
            cout << "(" << index + 1 << ") ";
        }
        else {
            cout << index + 1 << " ";
        }
    }
        delete[] visited;
    return;
}

int main() {
    int k;
    cout << "Введите элемент поиска: ";
    cin >> k;
    
    int n = 8 ;
    int** grav = new int* [n] {
        new int[n] {0, 1, 0, 0, 0, 0, 1, 0},
        new int[n] {0, 0, 0, 0, 1, 0, 0, 0},
        new int[n] {0, 1, 0, 0, 0, 0, 0, 0},
        new int[n] {0, 0, 0, 0, 0, 0, 0, 0},
        new int[n] {0, 0, 0, 1, 0, 1, 0, 0},
        new int[n] {0, 0, 0, 0, 0, 0, 1, 0},
        new int[n] {0, 0, 0, 0, 0, 0, 0, 1},
        new int[n] {1, 0, 0, 0, 0, 0, 0, 0},
    };
    printgrav(grav,n);
    cout << "Проход в глубину\n";
    dfsDeep(grav,nullptr,0,n,k);
    cout << "\nПроход в ширину\n";
    queue<int> q;
    q.push(0);
    dfsWeight(grav, q, n,k);
    return 0;
}
