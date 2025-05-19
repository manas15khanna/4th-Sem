#include <stdio.h>
#include <stdlib.h>

int comparator(const void *p1, const void *p2) {
    return ((int *)p1)[2] - ((int *)p2)[2];
}
void makeSet(int parent[], int rank[], int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}
int findParent(int parent[], int component) {
    if (parent[component] == component)
        return component;
    return parent[component] = findParent(parent, parent[component]);
}
void unionSet(int u, int v, int parent[], int rank[]) {
    u = findParent(parent, u);
    v = findParent(parent, v);
    if (rank[u] < rank[v]) {
        parent[u] = v;
    } else if (rank[u] > rank[v]) {
        parent[v] = u;
    } else {
        parent[v] = u;
        rank[u]++;
    }
}
int kruskalAlgo(int n, int edges[][3], int e) {
    qsort(edges, e, sizeof(edges[0]), comparator);
    int parent[n];
    int rank[n];
    makeSet(parent, rank, n);
    int minCost = 0;
    printf("Edges in the Minimum Spanning Tree:\n");
    for (int i = 0, count = 0; count < n - 1 && i < e; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        int parentU = findParent(parent, u);
        int parentV = findParent(parent, v);
        if (parentU != parentV) {
            unionSet(parentU, parentV, parent, rank);
            minCost += wt;
            printf("%d - %d : %d\n", u, v, wt);
            count++;
        }
    }
    return minCost;
}
int main() {
    int n, e;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &e);
    int edges[e][3];
    printf("Enter the edges (format: u v weight):\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d %d", &edges[i][0], &edges[i][1], &edges[i][2]);
    }
    int minCost = kruskalAlgo(n, edges, e);
    printf("Minimum Cost of the Spanning Tree: %d\n", minCost);
    return 0;
}
