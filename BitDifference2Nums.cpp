int countBitsFlip(int a, int b){
        
        // Your logic here
		// int flag = 0;
		// if(a == 0 || b == 0) flag = 1;
        int count=0;
        if((a^b)&1){
        	count++;
        }
        a=a>>1;
        b=b>>1;
        while(a && b){
        	// cout<<"loop 1"<<endl;
            if((a^b)&1) count++;
            a=a>>1;
            b=b>>1;
        }
        while(a){
        	// cout<<"loop 2"<<endl;
        	if(a&1) count++;
            a=a>>1;
        }

        while(b){
        	// cout<<"loop 3"<<endl;
            if(b&1) count++;
            b=b>>1;
        }
        // if(flag == 1) return count-1;
        return count;
    }