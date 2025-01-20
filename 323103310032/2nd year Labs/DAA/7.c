#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100


void DFS(int graph[MAX_NODES][MAX_NODES], int visited[], int node, int totalNodes) {
    visited[node] = 1;

    for (int i = 0; i < totalNodes; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            DFS(graph, visited, i, totalNodes);
        }
    }
}


int isConnected(int graph[MAX_NODES][MAX_NODES], int totalNodes) {
    int visited[MAX_NODES] = {0};

   
    DFS(graph, visited, 0, totalNodes);

    
    for (int i = 0; i < totalNodes; i++) {
        if (visited[i] == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int totalNodes;
    int graph[MAX_NODES][MAX_NODES];

    printf("Enter the number of nodes: ");
    scanf("%d", &totalNodes);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < totalNodes; i++) {
        for (int j = 0; j < totalNodes; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    if (isConnected(graph, totalNodes)) {
        printf("The graph is connected.\n");
    } else {
        printf("The graph is NOT connected.\n");
    }

    return 0;
}
