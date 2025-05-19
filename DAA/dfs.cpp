#include <iostream>
using namespace std;
const int MAX = 100;
void DFS_Recursive(int graph[][MAX], int vertex, bool visited[], int vertices) {
    visited[vertex] = true;
    cout << vertex << " ";
    for (int i = 0; i < vertices; ++i) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            DFS_Recursive(graph, i, visited, vertices);
        }
    }
}
void DFS_withRecursion(int graph[][MAX], int start, int vertices) {
    bool visited[MAX] = {false};
    cout << "DFS Traversal (Recursive): ";
    DFS_Recursive(graph, start, visited, vertices);
    cout << endl;
}
