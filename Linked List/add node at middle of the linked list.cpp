#include <iostream>
using namespace std;
    struct node{
        int data;
        node*next;
    };
         void printList(node *n)
         {
        int count=0;
        while(n!=NULL){
            cout<<n->data<<endl;
            n=n->next;
            count++;
        }
        cout<<"Count of Node is:  "<<count;
   };  
    
   node *insertAtMiddle(node *previous, int data){
       node *newnode= new node();
       newnode->data= data;
       newnode->next= previous->next;
       previous->next;
       return newnode;
   }
   
    int main() {
       node *head= new node();
       insertAtMiddle(head,14);
       printList(head);
}
