bool findPair(int arr[], int size, int n){
    //code
    sort(arr, arr+size);
    for(int i=0;i<size;i++){
        int target1 = n+arr[i],target2 = arr[i]-n;
        int l=i+1,r=size-1;
        // int count=0;
        while(l<=r){
        	int mid=(l+r)/2;
        	// cout<<arr[mid]<<endl;
            if(arr[mid] == target1) return true;
            else if(arr[mid] < target1) l=mid+1;
            else r=mid-1;
        }
        l = i+1,r = size-1;
        while(l<=r){
        	int mid=(l+r)/2;
        	// cout<<arr[mid]<<endl;
            if(arr[mid] == target2) return true;
            else if(arr[mid] < target2) l=mid+1;
            else r=mid-1;
        }
    }
    return false;
}