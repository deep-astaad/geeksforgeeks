bool detectLoop(Node* head)
    {
        Node* fast = head->next;
        Node* slow = head;
        while(fast != NULL && fast->next != NULL){
            if(fast == slow){
                return true;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }