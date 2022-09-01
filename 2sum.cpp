bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int low=0,high=n-1;
	    while(low < high){
	        if(arr[low]+arr[high] == x) return true;
	        else if(arr[low]+arr[high] < x) low++;
	        else high--;
	    }
	    return false;
	}