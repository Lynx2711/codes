//kahn's algorithm
#include

vector<int> topologicalSort(vector<vector<int>> &edges,int v,int u)
{
    //adj list
    unordered_map<int,list<int>> &adj;

    //find indegrees
    vector<int> indegree(v);
    for(auto i : adj){
        indegree[j]++;
    }

    //push
    queue<int> q;
    for(int i = 0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    //bfs
    vector<int> ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        //neighbor indegree update
        for(auto neighbor : adj[front]){
            indegree[neighbor]--;
            if(indegree[neighbor]==0){
                q.push(neighbor);
            }
        }
    }
}