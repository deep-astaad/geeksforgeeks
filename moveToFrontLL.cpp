ListNode *moveToFront(ListNode *head){
        if(head==NULL || head->next == NULL) return head;
        ListNode *prev=NULL,*curr = head;
        while(curr->next){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        curr->next = head;
        head=curr;
        return head;
    }