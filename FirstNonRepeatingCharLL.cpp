string FirstNonRepeating(string A){
    // Code here
    string ans= "";
    queue<char> que;
    vector<int> freq(26,0);
    que.push(A[0]);
    freq[A[0]-'a']++;
    ans+=A[0];
    for(int i=1;i<A.size();i++){
        freq[A[i]-'a']++;
        if(freq[A[i]-'a'] == 1){
            que.push(A[i]);
        }
        while(que.empty() == false && freq[que.front()-'a'] != 1){
            que.pop();
        }
        if(que.empty() == true){
            ans+='#';
        }
        else{
            ans+=que.front();
        }
    }
    return ans;
}