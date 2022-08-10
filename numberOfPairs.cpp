class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> v(100,0);
        int total = nums.size();
        int pairs = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            v[nums[i]]++;
        }
        for (int i = 0; i < 100; ++i)
        {
            if(v[i] % 2 == 0){
                // total -= v[i];
                pairs += v[i]/2;
                v[i] = 0;
            }
            else{
                // total -= v[i] +1;
                pairs += v[i]/2;
                v[i] = 1;
            }
        }
        vector<int> v(2);
        v[0] = pairs;
        v[1] = total-2*pairs;
        return v;

    }
};