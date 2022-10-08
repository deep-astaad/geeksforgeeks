class Solution{
public:
    vector<int> v;
    void solve(int N){
        if(N==1){
            v.push_back(1);
            return;
        }
        v.push_back(N);
        if(N&1){
            solve(sqrt(N)*sqrt(N)*sqrt(N));
        }
        else{
            solve(sqrt(N));
        }
        // solve(N+1);
    }
    vector<int> jugglerSequence(int N){
        // code here
        solve(N);
        return v;
    }
};