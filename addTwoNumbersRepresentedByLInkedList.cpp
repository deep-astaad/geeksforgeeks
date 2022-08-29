struct Node* reverse(struct Node* head){
        struct Node *curr = head, *prev = NULL, *next = NULL;
        if(head == NULL){
            return head;
        }
        while(curr->next != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        curr->next = prev;
        return curr;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        int carr = 0,sum=0;
        
        Node *tempf = first;
        Node *temps = second;
        Node *head = NULL,*temp = NULL;
        while(temps != NULL && tempf != NULL){
            sum = carr + tempf->data + temps->data;
            carr = sum/10;
            if(head == NULL){
                head = new Node(sum%10);
                temp = head;
            }
            else{
                Node *temp1 = new Node(sum%10);
                temp->next=temp1;
                temp=temp->next;
            }
            tempf=tempf->next;
            temps=temps->next;  
        }
        while(tempf!=NULL){
            sum = tempf->data + carr;
            carr = sum/10;
            Node *temp1 = new Node(sum%10);
            temp->next= temp1;
            temp=temp->next;
            tempf=tempf->next;
        }
        while(temps!=NULL){
            sum = temps->data + carr;
            carr = sum/10;
            Node *temp1 = new Node(sum%10);
            temp->next= temp1;
            temp=temp->next;
            temps=temps->next;
        }
        if(carr == 1){
            Node *end = new Node(carr);
            temp->next = end;
        }
        head=reverse(head);
        return head;
    }