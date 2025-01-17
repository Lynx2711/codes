#include <iostream>
using namespace std;

void dfsUtil(int node, int adj[][100], bool visited[], int v, int result[], int &index) {
    visited[node] = true;
    result[index++] = node; // Add the current node to the result array

    for (int i = 0; i < v; ++i) {
        if (adj[node][i] == 1 && !visited[i]) {
            dfsUtil(i, adj, visited, v, result, index); // Recursive call for unvisited neighbors
        }
    }
}

int* dfs(int v, int adj[][100], int &resultSize) {
    static int result[100];
    bool visited[100] = {false};
    int index = 0;

    dfsUtil(0, adj, visited, v, result, index); // Start DFS from node 0
    resultSize = index;
    return result;
}

int main() {
    int v, e;
    cin >> v >> e;

    int adj[100][100] = {0}; // Adjacency matrix
    // Input the edges
    for (int i = 0; i < e; ++i) {
        int node1, node2;
        cin >> node1 >> node2;
        adj[node1][node2] = 1;
        // Uncomment the next line for an undirected graph
        // adj[node2][node1] = 1;
    }

    int resultSize;
    int* result = dfs(v, adj, resultSize);

    for (int i = 0; i < resultSize; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
