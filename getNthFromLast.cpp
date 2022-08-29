int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *temp = head;
       int count = 0;
       while(temp != NULL){
           count++;
           temp = temp->next;
       }
       temp = head;
       while(count-n && temp!=NULL){
           count--;
           temp = temp->next;
       }
       if(count-n == 0){
           return temp->data;
       }
       return -1;
       
}