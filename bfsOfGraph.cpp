vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> visited(V+1,0);
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int curr=q.front();
            bfs.push_back(curr);
            q.pop();
            for(auto i : adj[curr]){
                if(visited[i] == 0){
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
        return bfs;
    }