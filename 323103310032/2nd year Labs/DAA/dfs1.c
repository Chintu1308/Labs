// dfs using adjacent list(iterative)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* adj[MAX];
Node* rev[MAX];
int visited[MAX], V;

Node* createNode(int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

void addEdge(Node* graph[MAX], int u, int v) {
    Node* newNode = createNode(v);
    newNode->next = graph[u];
    graph[u] = newNode;
}

void dfsIterative(int start, Node* graph[MAX]) {
    int stack[MAX], top = -1;
    stack[++top] = start;
    visited[start] = 1;

    while (top != -1) {
        int v = stack[top--];
        Node* temp = graph[v];

        while (temp) {
            int adjVertex = temp->vertex;
            if (!visited[adjVertex]) {
                stack[++top] = adjVertex;
                visited[adjVertex] = 1;
            }
            temp = temp->next;
        }
    }
}

int isStronglyConnected() {
    memset(visited, 0, sizeof(visited));
    dfsIterative(0, adj);
    for (int i = 0; i < V; i++)
        if (!visited[i]) return 0;

    memset(visited, 0, sizeof(visited));
    dfsIterative(0, rev);
    for (int i = 0; i < V; i++)
        if (!visited[i]) return 0;

    return 1;
}

int main() {
    int E, u, v;
    scanf("%d %d", &V, &E);
    for (int i = 0; i < V; i++) {
        adj[i] = NULL;
        rev[i] = NULL;
    }

    for (int i = 0; i < E; i++) {
        scanf("%d %d", &u, &v);
        addEdge(adj, u, v);
        addEdge(rev, v, u);
    }

    printf(isStronglyConnected() ? "Strongly connected\n" : "Not strongly connected\n");
    return 0;
}
