vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> v;
        int xr = 0;
        for(int i=0;i<nums.size();i++){
            xr = xr^nums[i];
        }
        int x=0,y=0;
        int rightmost = xr & ~(xr-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightmost){
                x = x^nums[i];
            }
            else{
                y = y^nums[i];
            }
        }
        if(x<y){
            v.push_back(x);
            v.push_back(y);
        }
        else{
            v.push_back(y);
            v.push_back(x);
        }
        
        return v;
        
    }