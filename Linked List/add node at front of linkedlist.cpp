#include<iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

void printList(node *n){
  int count=0;
  while(n!=NULL){
    cout<<n->data<<endl;
    n=n->next;
    count++;
  }
  cout<<"The number of node is: "<<count<<endl;
};

node *push(node *head, int x) {
node *newnode= new node();
newnode->data= x;
newnode->next=head;
head= newnode;

return head;
}
int main(){
   node *head= new node();
   head = push(head, 11);
   head = push(head, 13);
   head = push(head, 14);
  
   printList(head);
  
}
