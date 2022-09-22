class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int sv,int prev, vector<int> adj[], vector<bool> &visited){
        visited[sv]=true;
        for(auto it : adj[sv]){
            if(!visited[it]){
                if(dfs(it,sv,adj,visited)) return true;
            }
            else if (it != prev){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(i,-1,adj,visited)) return true;
                // if(ans==true) return true;
            }
        }
        return false;
    }
};
