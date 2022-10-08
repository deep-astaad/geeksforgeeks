Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node *temp=head;
 while(temp->next != NULL){
     if(temp->data == temp->next->data){
         Node *dup = temp->next; 
         temp->next = temp->next->next;
         delete dup;
     }
     else{
         temp = temp->next;
     }
 }
 return head;
}