void merge(int arr[], int l, int m, int r)
    {
        int len1 = m-l+1,len2 = r-m;
        // int *arrl = new int[len1];
        // int *arr2 = new int[len2];
        int arr1[len1],arr2[len2];
        int k = l;
        for(int i=0;i<len1;i++){
            arr1[i] = arr[k++];
        }
        for(int i=0;i<len2;i++){
            arr2[i] = arr[k++];
        }
        int idx1=0,idx2=0,mainidx=l;
        while(idx1 < len1 && idx2 < len2){
            if(arr1[idx1] <= arr2[idx2]){
                arr[mainidx++] = arr1[idx1++];
            }
            else{
                arr[mainidx++] = arr2[idx2++];
            }
        }
        while(idx1 < len1){
            arr[mainidx++] = arr1[idx1++];
        }
        while(idx2 < len2){
            arr[mainidx++] = arr2[idx2++];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l >= r) return;
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
        
    }