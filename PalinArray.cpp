bool isPalin(int n){
        string s= "";
        while(n){
            s+='0'+(n%10);
            n/=10;
        }
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[j] != s[i]) return false;
            i++;
            j--;
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    if( !isPalin(a[i]) ) return 0;
    	}
    	return 1;
    }