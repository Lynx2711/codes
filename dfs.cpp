//dfs: depth first  search
//adjacency list to contain all the adjacent nodes, visited to check if a node is already visited or not(if visited, we move on and check if other neighbours are already visited or not), 
//at first all the nodes will be false in visited

void dfs(int n, unordered_map<int, bool> &visited, unordered_map<int, list<int>> adj, )
vector<vector<int>> depthFirstSearch(int V,int E,vector<vector<int>> &edges){
    //adj list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back[v];
        adj[v].push_back[u];
    }
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for(int i = 0;i<V;i++){
        if(visited[i]){
            dfs();
        }
    }
}