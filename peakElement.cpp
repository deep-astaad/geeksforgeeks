class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
         int idx = 0;

         for (int i = 0; i < n; ++i)
         {
            if(arr[i] > arr[idx]){
               idx = i;
            }
         }

      return idx;
       
    }
};