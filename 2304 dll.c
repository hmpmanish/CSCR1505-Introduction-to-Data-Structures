#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *left;
 struct node *right;
};
struct node *Root=NULL;

void append();
void display();
int length();
void add_begin();
void insert();
void del();

void main()
{
 int n,i;
 clrscr();
 printf("How many node you want to append: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  append();
 }
 display();
 length();
 add_begin();
 display();
 length();
 insert();
 display();
 length();
 del();
 display();
 getch();
}

// Append node
void append()
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter the node values what you want to append: ");
 scanf("%d", &temp->data);
 temp->left=NULL;
 temp->right=NULL;
 if (Root==NULL)
 {
  Root=temp;
 }
 else
 {
  struct node *p;
  p=Root;
  while(p->right!=NULL)
  {
   p=p->right;
  }
  p->right=temp;
  temp->left=p;
 }
}

// Display list
void display()
{
 struct node *p;
 p=Root;
// printf("\n");
 while(p!=NULL)
 {
  printf("<-<-%d->->", p->data);
  p=p->right;
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
  p=p->right;
  count++;
 }
 printf("\nThe length of the linked list is %d\n", count);
 return count;
}

// Insert at beginning
void add_begin()
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("\nEnter the node value what you want to add at beginning: ");
 scanf("%d", &temp->data);
 temp->left=temp;
 temp->right=Root;
 Root=temp;
}

// Insert at position
void insert()
{
 int i=1,loc;
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("\nEnter the node values what you want to insert: ");
 scanf("%d", &temp->data);
 temp->left=NULL;
 temp->right=NULL;
 printf("Enter the location where you want to insert: ");
 scanf("%d", &loc);

 if (loc<=length());
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
    p=p->right;
    i++;
   }
   temp->right=p->right;
   p->right=temp;
  }
 }
}

// Delete node
void del()
{
 struct node *p;
 int i=1,loc;
 printf("\nEnter the location of node you want to delete: ");
 scanf("%d", &loc);
 if (loc<=length())
 {
  if(loc==1)
  {
   p=Root;
   Root=Root->right;
   p->right=NULL;
   free(p);
  }
  else
  {
   struct node *p, *q;
   p = Root;
   while (i<loc-1)
   {
    p=p->right;
    i++;
   }
   q=p->right;
   p->right=q->right;
   q->right=NULL;
   free(q);
  }
 }
}
