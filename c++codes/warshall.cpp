#include <iostream>
using namespace std;

void warshall(int adj[][10],int n){  //we operate on adj matrix
    for(int k = 0; k<n;k++){
        for(int i = 0; i<n; i++){
            for(int j = 0;j<n;j++){
                adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
            }
        }
    }
}
void print(int graph[][10],int n){ //this is the final matrix
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int graph[10][10];
    int adj[10][10];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>graph[i][j];
            adj[i][j] = graph[i][j]; //initialise adj matrix
        }
    }
    int u,v;
    cin>>u>>v;
    warshall(adj,n);
    print(adj,n);
    if(adj[u][v]) cout<<"Path exists"<<endl;
    else cout<<"Path does not exist"<<endl;
}


//2nd question 
#include <iostream>
using namespace std;

#define MAX_NODES 100

bool hasChainOfConnections(int n, int connections[MAX_NODES][MAX_NODES], int source, int target) {
   for(int k = 0;k<n;k++){
       for(int i = 0;i<n;i++){
           for(int j = 0;j<n;j++){
               connections[i][j] = connections[i][j] || (connections[i][k] && connections[k][j]);
           }
       }
   }
   return connections[source][target];
}

int main() {
    int n; // Number of nodes
    cin >> n;

    int connections[MAX_NODES][MAX_NODES] = {0};

    // Taking input for direct connections
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> connections[i][j];
        }
    }

    int source, target;
    cin >> source >> target;

    if (hasChainOfConnections(n, connections, source, target)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}


//-------------------------FLOYD WARSHALL
//shortest path

#include <iostream>
using namespace std;
#define INF 999
#define MAXN 100

int dis[MAXN][MAXN];
int next[MAXN][MAXN];

void initialise(int v,int graph[MAXN][MAXN]){
    for(int i = 0;i<v;i++){
        for(int j = 0;j<v;j++){
            dis[i][j] = graph[i][j];
            if(graph[i][j] == INF || i == j)
            {
                next[i][j] = -1; //no valid path yet
            }
            else{
                next[i][j] = j; 
            }
        }
    }
}

void floydwarhsall(int v){
    for(int k = 0;k<v;k++){
        for(int i = 0;i<v;i++){
            for(int j = 0;j<v;j++){
                if(dis[i][k] < INF && dis[k][j] < INF && dis[i][k] + dis[k][j] < dis[i][j]){
                    dis[i][j] = dis[i][k] + dis[k][j];
                    next[i][j] = next[i][k];
                }
            }
        }
    }
}
void printPath(int path[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << " -> ";
        cout << path[i];
    }
    cout << endl;
}

int main(){
    int v;
    cin>>v;

    int graph[MAXN][MAXN];
    for(int i = 0;i<v;i++){
        for(int j = 0;j<v;j++){
            cin>>graph[i][j];
        }
    }

    initialise(v,graph);
    floydwarshall(v);

    int source = 0;
    int dest;
    cin>>dest;
    int path[MAXN];

    path[0] = source;
    int index = 1;
    while(source!=dest){
        source = next[source][dest];
        path[index++] =source;
    }
    cout<<"shortest path = "<< printPath(path,index);
}

//detecting negative cycles
#include <iostream>
using namespace std;

const int INF = 1e7; // A large number to represent infinity

void initializeDistMatrix(int dist[][100], int V, int edges[][3], int E) {
    // Initialize distances between vertices
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (i == j) {
                dist[i][j] = 0; // Distance to itself is 0
            } else {
                dist[i][j] = INF; // Start with infinity
            }
        }
    }
    // Populate edges
    for (int i = 0; i < E; ++i) {
        int u = edges[i][0], v = edges[i][1], w = edges[i][2];
        dist[u][v] = w;
    }
}

void floydWarshall(int dist[][100], int V) {
    // Floyd-Warshall algorithm to compute shortest paths
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int hasNegativeCycle(int dist[][100], int V) {
    // Check for negative cycles
    for (int i = 0; i < V; ++i) {
        if (dist[i][i] < 0) { // Negative weight cycle detected
            return 1;
        }
    }
    return 0; // No negative weight cycle
}

int main() {
    int V, E;
    cin >> V >> E;

    int edges[100][3]; // Array to store the edges
    for (int i = 0; i < E; ++i) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    int dist[100][100];
    initializeDistMatrix(dist, V, edges, E);
    floydWarshall(dist, V);

    if (hasNegativeCycle(dist, V)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

