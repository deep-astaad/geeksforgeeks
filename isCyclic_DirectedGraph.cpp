class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int v, vector<int> adj[], vector<bool> &vis, vector<bool> &dfsvis){
        vis[v]=true;
        dfsvis[v]=true;
        for(auto i : adj[v]){
            if(!vis[i]){
                if(dfs(i,adj,vis,dfsvis)) return true;
            }
            else if(dfsvis[i]){
                return true;
            }
        }
        dfsvis[v]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V,0);
        vector<bool> dfsvis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfsvis.clear();
                if(dfs(i,adj,vis,dfsvis)){
                    return true;
                }
            }
        }
        return false;
    }
};