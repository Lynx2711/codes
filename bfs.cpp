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
