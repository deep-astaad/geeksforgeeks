int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int size1 = 0,size2=0;
    Node *temp1 = head1,*temp2 = head2;
    while(temp1!=NULL){
        size1++;
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        size2++;
        temp2 = temp2->next;
    }
    temp1 = head1;
    temp2 = head2;
    if(size1>size2){
        int skip = size1 - size2;
        while(skip){
            skip--;
            temp1 = temp1->next;
        }
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1->data;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return -1;
    }
    else{
        int skip = size2 - size1;
        while(skip){
            skip--;
            temp2 = temp2->next;
        }
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1->data;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return -1;
    }
}