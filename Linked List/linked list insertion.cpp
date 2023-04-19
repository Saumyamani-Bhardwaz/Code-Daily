class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        Node *newNode= new Node(x);
        newNode-> next =head;
        head = newNode;
        return head;
    }
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       if(head==NULL)
       {
           Node *newNode= new Node(x);
           head=newNode;
           return head;
       }
       Node *newNode= new Node(x);
       Node *current=head;
       while(current->next!= NULL){
          current=current->next;
       }
       current->next= newNode;
       return head;
    }
};
