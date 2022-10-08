Node *reverse(Node *head){
        Node *curr = head, *prev = NULL, *next=NULL;
        while(curr->next){
            next=curr->next;
            curr->next=prev;
            prev = curr;
            curr=next;
        }
        curr->next = prev;
        return curr;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        int carr = 1,sum = 0;
        head = reverse(head);
        Node *temp=head, *prev=temp;
        while(temp->next){
            sum = carr + temp->data;
            if(sum>=10){
                carr = 1;
            }
            else{
                carr = 0;
            }
            prev = temp;
            temp->data = sum%10;
            temp = temp->next;
        }
        if(carr == 1){
            if(carr + temp->data >= 10){
                Node *last = new Node(1);
                temp->data = (carr + temp->data)%10;
                temp->next = last;
            }
            else{
                temp->data = carr + temp->data;
            }
            
        }
        return reverse(head);
    }