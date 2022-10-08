Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int> st;
     Node *temp=head;
     Node *prev = NULL;
     while(temp != NULL){
         if(st.find(temp->data) == st.end()){
             st.insert(temp->data);
             prev = temp;
         }
         else{
             prev->next = temp->next;
             Node *dup = temp;
             delete dup;
         }
         temp = temp->next;
     }
     return head;
    }