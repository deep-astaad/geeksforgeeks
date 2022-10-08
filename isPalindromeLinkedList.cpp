Node *reverse(Node *head){
        Node *curr=head,*next=NULL,*prev = NULL;
        while(curr->next != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
        }
        curr->next = prev;
        return curr;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head == NULL || head->next == NULL){
            return true;
        }
        Node *slow = head;
        Node *fast = head->next;
        while(fast!= NULL && fast ->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *temp2=reverse(slow->next);
        Node *temp1=head;
        slow->next = NULL;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->data != temp2->data){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }