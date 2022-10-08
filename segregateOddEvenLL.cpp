class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *evenh=NULL,*oddh=NULL, *event=NULL, *oddt=NULL;
        Node *temp =  head;
        while(temp){
            if((temp->data)%2 == 0){
                if(evenh == NULL){
                    evenh = temp;
                    Node *next = temp->next;
                    evenh->next= NULL;
                    temp = next;
                    event = evenh;
                }
                else{
                    event->next = temp;
                    Node *next = temp->next;
                    event = event->next;
                    event->next= NULL;
                    temp = next;
                }
            }
            else{
                if(oddh == NULL){
                    oddh = temp;
                    Node *next = temp->next;
                    oddh->next= NULL;
                    temp = next;
                    oddt = oddh;
                }
                else{
                    oddt->next = temp;
                    Node *next = temp->next;
                    oddt = oddt->next;
                    oddt->next= NULL;
                    temp = next;
                }
            }
        }
        if(evenh == NULL){
            return oddh;
        }
        else{
            event->next = oddh;
            return evenh;
        }
        
    }
};