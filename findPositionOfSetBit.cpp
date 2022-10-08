int findPosition(int N) {
        // code here
        int pos=-1,count=0,idx=1;
        while(N){
            if(N&1 == 1) {
                pos=idx;
                count++;
            }
            idx++;
            N = N>>1;
        }
        if(count == 1) return pos;
        return -1;
    }