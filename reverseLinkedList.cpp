struct Node* reverseList(struct Node *head)
    {
        if(head == NULL){
            return head;
        }
        Node *curr,*prev,*next;
        curr = head;
        prev = NULL;
        next = head;
        while(curr->next != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        curr->next = prev;
        return curr;
        // if(head == NULL || head->next == NULL){
        //     return head;
        // }
        // Node *temp = reverseList(head->next);
        // head->next->next = head;
        // head->next = NULL;
        // head = temp;
        // return head;
    }