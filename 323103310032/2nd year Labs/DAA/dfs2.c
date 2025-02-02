// dfs using adjacent list (recursion)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* adj[MAX];
int visited[MAX], V;

Node* createNode(int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

void addEdge(int u, int v) {
    Node* newNode = createNode(v);
    newNode->next = adj[u];
    adj[u] = newNode;
}

void dfsRecursive(int v) {
    visited[v] = 1;
    printf("%d ", v);
    Node* temp = adj[v];

    while (temp) {
        int adjVertex = temp->vertex;
        if (!visited[adjVertex]) {
            dfsRecursive(adjVertex);
        }
        temp = temp->next;
    }
}

int main() {
    int E, u, v;
    scanf("%d %d", &V, &E);
    for (int i = 0; i < V; i++) {
        adj[i] = NULL;
    }

    for (int i = 0; i < E; i++) {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    memset(visited, 0, sizeof(visited));
    printf("DFS starting from vertex 0:\n");
    dfsRecursive(0);
    printf("\n");

    return 0;
}
