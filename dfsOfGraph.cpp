class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int V, vector<int> adj[], vector<int> &visited, int sv, vector<int> &v){
        visited[sv]=1;
        v.push_back(sv);
        for(auto i : adj[sv]){
            if(visited[i]==0){
                dfs(V,adj,visited,i,v);
            }
        }
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int sv=0;
        vector<int> visited(V,0);
        vector<int> v;
        dfs(V,adj,visited,sv,v);
        return v;
    }
};