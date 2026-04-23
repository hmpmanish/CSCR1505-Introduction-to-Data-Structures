#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
 int data;
 struct node *link;
};

struct node *Root=NULL;

void append();
void display();
int length();
void add_begin();
void insert();
void del();
void find_middle();
void swap_nodes();
void reverse();

void main()
{
 int ch, n, i;
 clrscr();

 while (1)
 {
  printf("\n===== LINKED LIST MENU =====");
  printf("\n1. Append Nodes");
  printf("\n2. Display List");
  printf("\n3. Find Length");
  printf("\n4. Add at Beginning");
  printf("\n5. Insert at Position");
  printf("\n6. Delete Node");
  printf("\n7. Find Middle Node");
  printf("\n8. Swap Two Nodes");
  printf("\n9. Reverse Linked List");
  printf("\n10. Exit");
  printf("\nEnter your choice: ");
  scanf("%d", &ch);

  switch (ch)
  {
   case 1:
   printf("How many nodes do you want to append? ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
    append();
   }
    break;

   case 2:
   display();
   break;

   case 3:
   length();
   break;

   case 4:
   add_begin();
   break;

   case 5:
   insert();
   break;

   case 6:
   del();
   break;

   case 7:
   find_middle();
   break;

   case 8:
   swap_nodes();
   break;

   case 9:
   reverse();
   break;

   case 10:
   printf("\nExiting...");
   getch();
   exit(0);

   default:
   printf("\nInvalid choice");
  }
 }
}

// Append node
void append()
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter the node values what you want to append: ");
 scanf("%d", &temp->data);
 temp->link=NULL;
 if (Root==NULL)
 {
  Root=temp;
 }
 else
 {
  struct node *p;
  p=Root;
  while(p->link!=NULL)
  {
   p=p->link;
  }
  p->link=temp;
 }
}

// Display list
void display()
{
 struct node *p;
 p=Root;
 while(p!=NULL)
 {
  printf("%d->->", p->data);
  p=p->link;
 }
}

// Length of list
int length()
{
 int count=0;
 struct node *p;
 p=Root;
 while(p!=NULL)
 {
  p=p->link;
  count++;
 }
 printf("The length of the linked list is %d\n", count);
 return (count);
}

// Insert at beginning
void add_begin()
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter the node value what you want to add at beginning: ");
 scanf("%d", &temp->data);
 temp->link=Root;
 Root=temp;
}

// Insert at position
void insert()
{
 int i=1,loc;
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter the node values what you want to insert: ");
 scanf("%d", &temp->data);
 temp->link=NULL;
 printf("Enter the location where you want to insert: ");
 scanf("%d", &loc);
 if (loc<=length()) ;
 {
  if (Root==NULL)
  {
   Root=temp;
  }
  else
  {
   struct node *p;
   p=Root;
   while (i<loc-1)
   {
    p=p->link;
    i++;
   }
   temp->link=p->link;
   p->link=temp;
  }
 }
}

// Delete node
void del()
{
 struct node *p;
 int i=1,loc;
 printf("Enter the location of node you want to delete: ");
 scanf("%d", &loc);
 if (loc<=length())
 {
 if(loc==1)
 {
  p=Root;
  Root=Root->link;
  p->link=NULL;
  free(p);
 }
 else
 {
  struct node *p, *q;
  p = Root;
  while (i<loc-1)
  {
   p=p->link;
   i++;
  }
  q=p->link;
  p->link=q->link;
  q->link=NULL;
  free(q);
  }
 }
}

//Find Middle of Length
void find_middle()
{
 struct node *left, *right, *temp;
 if (Root==NULL)
 {
  printf("\nList is empty");
  return;
 }
 left=Root;
 right=Root;
 temp=NULL;
 while(right!=NULL && right->link!=NULL)
 {
  temp=left;
  left=left->link;
  right=right->link->link;
 }
 if(right==NULL)
 {
  printf("\nMiddle nodes are: %d and %d", temp->data, left->data);
 }
 else
 {
  printf("\nMiddle node is: %d", left->data);
 }
}

//Swap two node
void swap_nodes()
{
 int x, y;
 struct node *p, *q, *left, *right, *temp;
 if (Root==NULL)
 {
  printf("\nList is empty");
  return;
 }
 printf("Enter first value: ");
 scanf("%d", &x);
 printf("Enter second value: ");
 scanf("%d", &y);
 if (x==y)
 {
  printf("\nBoth values are same, no swap needed");
  return;
 }
 left=NULL;
 right=NULL;
 p=Root;
 q=Root;
 while(p!=NULL && p->data!=x)
 {
  left=p;
  p=p->link;
 }
 while(q!=NULL && q->data!=y)
 {
  right=q;
  q=q->link;
 }
 if(p==NULL || q==NULL)
 {
  printf("\nOne or both values not found");
  return;
 }
 if(left!=NULL)
  left->link=q;
 else
  Root=q;
 if(right!=NULL)
  right->link=p;
 else
  Root=p;
 temp=p->link;
 p->link=q->link;
 q->link=temp;
 printf("\nNodes swapped successfully");
}

//Reverse node
void reverse()
{
 struct node *left, *temp, *right;
 left=NULL;
 temp=Root;
 while(temp!=NULL)
 {
  right=temp->link;
  temp->link=left;
  left=temp;
  temp=right;
 }
 Root=left;
 printf("\nLinked list reversed successfully");
}
