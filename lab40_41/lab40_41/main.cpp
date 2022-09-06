#include <iostream>
#include "Header.h"

int main() {
    Graph graph(8);
    graph.addEdge(1, 2, 12);
    graph.addEdge(2, 3, 12);
    graph.addEdge(3, 4, 12);
    graph.addEdge(4, 5, 12);
    graph.addEdge(5, 6, 12);
    graph.addEdge(6, 7, 12);
    graph.addEdge(7, 1, 12);
    graph.addEdge(1, 8, 12);
    graph.addEdge(2, 8, 12);
    graph.addEdge(3, 5, 12);
    graph.addEdge(8, 6, 12);
    graph.addEdge(8, 7, 12);
    graph.print();
    std::cout << graph.FordFalken(1, 8) << "\n";
}
