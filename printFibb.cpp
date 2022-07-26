class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> v;
        v.push_back(1);
        if (n==1)
        {
            return v;
        }
        v.push_back(1);
        for (int i = 1; i < n-1; ++i)
        {
            v.push_back(v[i]+v[i-1]);
        }
        return v;

    }
};