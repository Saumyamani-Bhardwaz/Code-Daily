#include<stdio.h>
#include<stdlib.h>

struct Node			//Link list node 
{
  int data;
  struct Node *next;
};

void display (struct Node *node)
{

  //as linked list will end when Node is Null
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}


//Function found the middle element in the linked list
void print_Middle (struct Node *head)
{
  struct Node *first_ptr = head;
  struct Node *second_ptr = head;

  if (head != NULL)
    {
      //the only logic is to traverse the linked list with two pointers
      //one at normal speed and other twice the speed of first
      /*when the fast pointer reaches to the end, slow pointer will be in 
         the middle of the linted list */
      while (second_ptr != NULL && second_ptr->next != NULL)
	{
	  second_ptr = second_ptr->next->next;
	  first_ptr = first_ptr->next;
	}
      printf ("The middle element in the linked list is : %d",
	      first_ptr->data);
    }
}

int main ()
{
  //creating 4 pointers of type struct Node
  //So these can point to address of struct type variable
  struct Node *head = NULL;
  struct Node *node2 = NULL;
  struct Node *node3 = NULL;
  struct Node *node4 = NULL;
  struct Node *node5 = NULL;

  // allocate 3 nodes in the heap 
  head = (struct Node *) malloc (sizeof (struct Node));
  node2 = (struct Node *) malloc (sizeof (struct Node));
  node3 = (struct Node *) malloc (sizeof (struct Node));
  node4 = (struct Node *) malloc (sizeof (struct Node));
  node5 = (struct Node *) malloc (sizeof (struct Node));


  head->data = 80;		// data set for head node 
  head->next = node2;		// next pointer assigned to address of node2 

  node2->data = 15;
  node2->next = node3;

  node3->data = 31;
  node3->next = node4;

  node4->data = 44;
  node4->next = node5;

  node5->data = 92;
  node5->next = NULL;

  printf ("Linked List: ");
  display (head);

  print_Middle (head);		//print output

  return 0;
}
