#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;
Node* adjList[MAX];
int visited[MAX];
// Function to add edge to the graph (undirected)
void addEdge(int src, int dest) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = dest;
    newNode->next = adjList[src];
    adjList[src] = newNode;

    newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = src;
    newNode->next = adjList[dest];
    adjList[dest] = newNode;
}
// Recursive DFS function
void dfs(int vertex) {
    Node* temp = adjList[vertex];
    visited[vertex] = 1;
    printf("%d ", vertex);

    while (temp != NULL) {
        int connectedVertex = temp->vertex;
        if (!visited[connectedVertex]) {
            dfs(connectedVertex);
        }
        temp = temp->next;
    }
}
int main() {
    int vertices, edges;
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    // Initialize adjacency list and visited array
    for (int i = 0; i < vertices; i++) {
        adjList[i] = NULL;
        visited[i] = 0;
    }
    printf("Enter edges (source and destination pairs):\n");
    for (int i = 0; i < edges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(src, dest);
    }
    int start;
    printf("Enter starting vertex for DFS: ");
    scanf("%d", &start);
    printf("DFS Traversal: ");
    dfs(start);
    printf("\n");

    return 0;
}

