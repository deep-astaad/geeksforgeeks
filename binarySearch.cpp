class Solution {
  public:
    int binarydac(int arr[], int low, int high, int target){
        int mid  = (low+high)/2;
        if (arr[mid] == target)
        {
            return mid;
        }
        
        else if (low==high)
        {
            if (arr[low] == target)
            {
                return arr[low];
            }
            else{
                return -1;
            }
        }
        else if (arr[mid] < target)
        {
            return binarydac(arr,mid+1,high,target);
        }
        else if(arr[mid] > target){
            return binarydac(arr,low,mid,target);
        }
        return -1;
    }
    int binarysearch(int arr[], int n, int k) {
        int ans = binarydac(arr,0,n-1,k);
        return ans;
    }
};