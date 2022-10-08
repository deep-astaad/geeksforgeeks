void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *slow = head, *fast = head, *entry = head, *prev = head;
        if (head == NULL || head->next == NULL) return ;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(entry != slow){
                    prev = slow;
                    entry = entry->next;
                    slow = slow->next;
                }
                prev->next = NULL;
                return ;
            }
        }
        return ;
        
    }