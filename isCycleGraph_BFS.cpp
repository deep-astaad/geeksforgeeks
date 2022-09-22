bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        bool visited[V] = {false};
        for(int i=0;i<V;i++){
            queue<pair<int, int>> track;
            if(!visited[i]){
                // bfs //
                visited[i]=true;
                track.push({i,-1});
                while(!track.empty()){
                    pair<int,int> pr = track.front();
                    track.pop();
                    int curr = pr.first;
                    int prev = pr.second;
                    for(auto it : adj[curr]){
                        if(visited[it]==true && prev != it){
                            return true;
                        }
                        else if(visited[it]==false){
                            track.push({it,curr});
                            visited[it]=true;
                        }
                    }
                }
            }
        }
        return false;
    }
