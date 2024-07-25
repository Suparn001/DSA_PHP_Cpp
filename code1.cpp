//Solution is- 
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head) {
        if(head == NULL){
            return -1;
        }
        
        
        
        struct Node *s;//created node to store the address of head
        struct Node *q;//created node to store the address of head

        s = head;
        q=head;
        int c =0; // c is the total length
        while(s!=NULL){
            s=s->next;
            c=c+1;
        }
        
        c=(c/2)+1;
        
        while(c!=1){
            q=q->next;
            c=c-1;
            
        }
        
        return q->data;
      
    }
};