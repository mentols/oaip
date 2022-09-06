#include "Graph.h"

int main() {
    system("chcp 1251");
    srand(time(NULL));
    
    Graph graph(9);
    graph.addEdge(1, 2, rand());
    graph.addEdge(1, 4, rand());
    graph.addEdge(1, 6, rand());
    graph.addEdge(2, 8, rand());
    graph.addEdge(3, 8, rand());
    graph.addEdge(3, 7, rand());
    graph.addEdge(4, 5, rand());
    graph.addEdge(5, 6, rand());
    graph.addEdge(5, 9, rand());
    graph.addEdge(6, 7, rand());
    graph.addEdge(8, 9, rand());
    graph.print();
    graph.prim();
    std::cout << "����:\n";
    graph.print();

    Graph graph1(9);
    graph1.addEdge(1, 2, rand());
    graph1.addEdge(1, 4, rand());
    graph1.addEdge(1, 6, rand());
    graph1.addEdge(2, 8, rand());
    graph1.addEdge(3, 8, rand());
    graph1.addEdge(3, 7, rand());
    graph1.addEdge(4, 5, rand());
    graph1.addEdge(5, 6, rand());
    graph1.addEdge(5, 9, rand());
    graph1.addEdge(6, 7, rand());
    graph1.addEdge(8, 9, rand());
    graph1.kruskal();
    std::cout << "�������:\n";
    graph1.print();
    system("pause");
    return 0;
}
