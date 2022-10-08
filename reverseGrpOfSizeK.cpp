struct node *reverse (struct node *head, int k)
    { 
        struct node *cur=head,*prev=NULL,*nex;
        int c=1;
        while(cur != NULL && c<=k){
            nex = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nex;
            c++;
        }
        
        if(nex != NULL){
            head->next = reverse(nex,k);
        }
        return prev;
    }