#include <iostream>
#include <queue>
using namespace std;

int* bfs(int v,int adj[][100],int &resultsize){
    static int result[100];
    bool visited[100];
    queue<int> q;
    int index = 0;

    q.push(0);
    visited[0] = true;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        result[index++] = curr;

        for(int i = 0;i<v;i++){
            if(adj[curr][i] == 1 && !visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
    resultsize = index;
    return result;
}
int main(){
    int v,e;
    cin>>v>>e;
    int adj[100][100] = {0};
    for(int i = 0;i<e;i++){
        int node1,node2;
        cin>>node1>>node2;
        adj[node1][node2] = 1;
    }
    int resultsize;
    int* result = bfs(v,adj,resultsize);
    for(int i = 0;i<resultsize;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}



//bfs traversal
#include <iostream>
#include <queue>
using namespace std;

int* bfsTraversal(int V, int adj[][100], int &resultSize) {
    static int result[100];
    bool visited[100] = {false};
    queue<int> q;

    int index = 0;

    // Start BFS from vertex 0
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        result[index++] = curr;

        for (int neighbor = 0; neighbor < V; ++neighbor) {
            if (adj[curr][neighbor] == 1 && !visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    resultSize = index;
    return result;
}

int main() {
    int V, E;
    cin >> V >> E;

    // Adjacency matrix
    int adj[100][100] = {0};

    // Input the edges
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // Assuming undirected graph
    }

    int resultSize;
    int* result = bfsTraversal(V, adj, resultSize);

    // Print BFS traversal
    for (int i = 0; i < resultSize; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


//check if path exists with dfs

#include <iostream>
using namespace std;

bool dfs(int node, int end, int adj[][100], bool visited[], int n) {
    //BASE CASE 
    if (node == end) 
        return true;

    visited[node] = true;

    for (int neighbor = 1; neighbor <= n; ++neighbor) {
        if (adj[node][neighbor] == 1 && !visited[neighbor]) {
            if (dfs(neighbor, end, adj, visited, n)) 
                return true;
        }
    }

    return false;
}

int main() {
    int n, m; // Number of nodes and edges
    cin >> n >> m;

    // Adjacency matrix
    int adj[100][100] = {0};

    // Input edges
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // For undirected graph
    }

    int start, end;
    cin >> start >> end;

    // Visited array
    bool visited[100] = {false};

    // Perform DFS to check path
    if (dfs(start, end, adj, visited, n)) {
        cout << "There is a path from " << start << " to " << end << endl;
    } else {
        cout << "There is no path from " << start << " to " << end << endl;
    }

    return 0;
}

//bfs to get the shortest distance
void add_edge(int adj[][100], int src, int dest) {
    // Add an edge to the adjacency matrix
    adj[src][dest] = 1;
    adj[dest][src] = 1; // Since the graph is undirected
}

bool BFS(int adj[][100], int src, int dest, int v, int pred[], int dist[]) {
    // Initialize all vertices as not visited
    bool visited[v];
    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    // Create a queue for BFS
    queue<int> q;

    // Mark the source as visited and enqueue it
    visited[src] = true;
    dist[src] = 0;
    q.push(src);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        // Explore all neighbors of curr
        for (int i = 0; i < v; i++) {
            if (adj[curr][i] && !visited[i]) { // There's an edge and it's not visited
                visited[i] = true;
                dist[i] = dist[curr] + 1;
                pred[i] = curr;
                q.push(i);

                // Stop BFS if we reach the destination
                if (i == dest) return true;
            }
        }
    }
    return false;
}


    // Trace the path from destination to source
    void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[]) {
    // If the destination is unreachable
    if (dist[dest] == INT_MAX) {
        cout << "No path exists" << endl;
        return;
    }

    // Trace the path from destination to source
    int path[100]; // Array to store the path (size 100 is the maximum number of vertices).
    int path_length = 0; // Length of the path

    int crawl = dest;
    while (crawl != -1) { // Follow the predecessors to trace the path
        path[path_length++] = crawl;
        crawl = pred[crawl];
    }

    // Print the distance
    cout << "Shortest path length is: " << dist[dest] << endl;

    // Print the path in reverse order (from source to destination)
    cout << "Path is: ";
    for (int i = path_length - 1; i >= 0; i--) {
        cout << path[i] << " ";
    }
    cout << endl;
}



//dfs

#include <iostream>
#include <stack>
using namespace std;

void DFS(int startVertex, int adj[][100], int V, bool visited[]) {
    stack<int> s;
    s.push(startVertex);  // Start from the given city
    visited[startVertex] = true;

    while (!s.empty()) {
        int city = s.top();
        s.pop();
        cout << city << " ";  // Visit the city

        for (int i = 0; i < V; i++) {
            if (adj[city][i] == 1 && !visited[i]) {  // Check for an edge and unvisited city
                visited[i] = true;  // Mark it visited
                s.push(i);  // Push it to the stack
            }
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    int adj[100][100] = {0};  // Adjacency matrix to represent the flight network

    // Input flight connections
    for (int i = 0; i < E; i++) {
        int v, w;
        cin >> v >> w;
        adj[v][w] = 1;  // Add the flight route
        // adj[w][v] = 1; // Uncomment for an undirected graph
    }

    int startVertex;
    cin >> startVertex;  // Starting city for DFS traversal

    bool visited[100] = {false};  // Array to track visited cities

    // Output DFS traversal
    cout << "Depth First Traversal starting from vertex " << startVertex << ":" << endl;
    DFS(startVertex, adj, V, visited);
    cout << endl;

    return 0;
}



