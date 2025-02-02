// dfs using adjacency matrix iterative

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int adj[MAX][MAX], rev[MAX][MAX], visited[MAX], V;

void dfs_iterative(int start, int graph[MAX][MAX]) {
    int stack[MAX], top = -1;
    stack[++top] = start;
    while (top != -1) {
        int v = stack[top--];
        if (!visited[v]) {
            visited[v] = 1;
            for (int i = 0; i < V; i++) {
                if (graph[v][i] && !visited[i]) {
                    stack[++top] = i;
                }
            }
        }
    }
}

int isStronglyConnected() {
    memset(visited, 0, sizeof(visited));
    dfs_iterative(0, adj);
    for (int i = 0; i < V; i++)
        if (!visited[i]) return 0;
    
    memset(visited, 0, sizeof(visited));
    dfs_iterative(0, rev);
    for (int i = 0; i < V; i++)
        if (!visited[i]) return 0;
    
    return 1;
}

int main() {
    int E, u, v;
    scanf("%d %d", &V, &E);
    memset(adj, 0, sizeof(adj));
    memset(rev, 0, sizeof(rev));
    
    for (int i = 0; i < E; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        rev[v][u] = 1;
    }
    
    printf(isStronglyConnected() ? "Strongly connected\n" : "Not strongly connected\n");
    return 0;
}
