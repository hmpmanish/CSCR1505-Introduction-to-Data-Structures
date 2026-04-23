#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *link;
};
struct node *tail=NULL;

void append();
void display();
int length();
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
  insert();
  display();
  length();
  del();
  display();
  length();
  getch();
}

void append()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the node value:");
 scanf("%d",&temp->data);
 temp->link=NULL;
 if(tail==NULL)
 {
  tail=temp;
  tail->link=temp;
 }
 else
 {
  temp->link=tail->link;
  tail->link=temp;
  tail=temp;
 }
}

void display()
{
 struct node *p;
 p=tail->link;
 do
 {
  printf("%d->->",p->data);
  p=p->link;
 }
 while(p!=tail->link);
 printf("\n");
}

int length()
{
 struct node *p;
 int count=0;
 p=tail;
 do
 {
  count++;
  p=p->link;
 }
 while(p!=tail);
 printf("\nThe length of the list is:%d\n",count);
 return(count);
}

void insert()
{
 struct node *temp;
 int loc;
 int i=1;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the node value what you want to insert: ");
 scanf("%d",&temp->data);
 temp->link=NULL;
 printf("Enter the location where you want to insert: ");
 scanf("%d",&loc);
 if(loc<=length()) ;
 {
  if(tail==NULL)
  {
   tail=temp;
  }
  else
  {
   struct node *p;
   p=tail->link;
   while(i<loc-1)
   {
    p=p->link;
    i++;
   }
   temp->link=p->link;
   p->link=temp;
  }
 }
}

void del()
{
 struct node *p,*q;
 int loc;int i=1;
 p=tail->link;
 printf("\nEnter the location where you want to delete: ");
 scanf("%d",&loc);
 if(loc<=length())
 {
  if(loc==1)
  {
   p=tail->link;
   tail=tail->link;
   p->link=NULL;
   free(p);
  }
  else
  {
   p=tail->link;
   while(i<loc-1)
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
