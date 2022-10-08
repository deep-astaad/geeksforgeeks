bool isCircular(Node *head)
{
    Node *temp = head->next;
    while(temp != NULL){
        if(temp == head){
            return true;
        }
        temp=temp->next;
    }
    return false;
   // Your code here
}