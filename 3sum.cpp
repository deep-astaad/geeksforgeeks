bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int tar = X-A[i];
            int low = i+1,high=n-1;
            while(low < high){
                if(A[low] + A[high] < tar) low++;
                else if(A[low] + A[high] > tar) high--;
                else{
                    return true;
                }
            }
        }
        return false;
    }