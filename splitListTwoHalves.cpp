void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *temp = head;
    int len = 1;
    while(temp->next != head){
        len++;
        temp = temp->next;
    }
    temp->next = NULL;
    Node *slow = head, *fast = head, *prev = NULL;
    while(fast && fast->next){
        prev=slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(len%2 == 0){
        prev->next = head;
    }
    else{
        prev = slow;
        slow = slow->next;
        prev->next = head;
    }
    *head1_ref = head;
    *head2_ref=slow;
    temp = *head2_ref;
    while(temp->next){
        temp=temp->next;
    }
    temp->next = *head2_ref;
    
}