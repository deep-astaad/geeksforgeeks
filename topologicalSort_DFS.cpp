class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int sv, vector<int> adj[], vector<int> &vis, stack<int> &st){
	    vis[sv]=1;
	    for(int i:adj[sv]){
	        if(!vis[i]){
	            dfs(i,adj,vis,st);
	        }
	    }
	    st.push(sv);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int> st;
	    vector<int> vis(V,0);
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,adj,vis,st);
	        }
	    }
	    vector<int> ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};