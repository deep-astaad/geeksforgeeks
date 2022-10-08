Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *head=NULL,*tail=NULL;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->data == temp2->data){
            if(head == NULL){
                Node *newN = new Node(temp1->data);
                head = temp1;
                tail = temp1;
            }
            else{
                Node *newN = new Node(temp1->data);
                tail->next = newN;
                tail=tail->next;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if(temp1->data < temp2->data){
            temp1 = temp1->next;
        }
        else{
            temp2 = temp2->next;
        }
    }
    return head;
}