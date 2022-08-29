Node *reverse(Node *head){
        Node *curr=head,*prev=NULL,*next=NULL;
        while(curr->next != NULL){
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        curr->next=prev;
        return curr;
    }
    Node *compute(Node *head)
    {
        head = reverse(head);
        if(head == NULL || head->next == NULL){
            return head;
        }
        Node *temp=head;
        int max=head->data;
        Node *prev=head;
        while(temp->next != NULL){
            if(temp->data < max){
                prev->next = temp->next;
                temp=temp->next;
            }
            else{
                max = temp->data;
                prev=temp;
                temp=temp->next;
            }
        }
        if(temp->data<max){
            prev->next=NULL;
        }
        head = reverse(head);
        return head;
    }