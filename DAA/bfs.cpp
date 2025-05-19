#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

typedef struct Queue {
    int items[MAX];
    int front, rear;
} Queue;

Node* adjList[MAX];
int visited[MAX];

// Queue functions
Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = -1;
    return q;
}

int isEmpty(Queue* q) {
    return q->front == -1;
}

void enqueue(Queue* q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue Full\n");
    } else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

int dequeue(Queue* q) {
    int item;
    if (isEmpty(q)) {
        printf("Queue Empty\n");
        return -1;
    } else {
        item = q->items[q->front];
        if (q->front >= q->rear)
            q->front = q->rear = -1;
        else
            q->front++;
        return item;
    }
}

// Add edge to undirected graph
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

// BFS traversal from startVertex
void bfs(int startVertex, int vertices) {
    Queue* q = createQueue();

    visited[startVertex] = 1;
    enqueue(q, startVertex);

    printf("BFS Traversal: ");
    while (!isEmpty(q)) {
        int currentVertex = dequeue(q);
        printf("%d ", currentVertex);

        Node* temp = adjList[currentVertex];

        while (temp) {
            int adjVertex = temp->vertex;

            if (!visited[adjVertex]) {
                visited[adjVertex] = 1;
                enqueue(q, adjVertex);
            }
            temp = temp->next;
        }
    }
    printf("\n");
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
    printf("Enter starting vertex for BFS: ");
    scanf("%d", &start);

    bfs(start, vertices);

    return 0;
}
