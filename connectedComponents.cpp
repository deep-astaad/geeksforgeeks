class Solution {
  public:
    void dfs(vector<vector<int>> adj, int sv, int V, vector<int> &visited){
        visited[sv]=1;
        for(int i=1;i<=V;i++){
            if(i != sv && adj[sv-1][i-1] == 1 && visited[i]==0){
                visited[i]=1;
                dfs(adj, i, V, visited);
            }
        }
        return ;
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> visited(V+1,0);
        int component=0;
        for(int i=1;i<=V;i++){
            if(visited[i]==0){
                component++;
                dfs(adj, i, V, visited);
            }
        }
        return component;
    }
};