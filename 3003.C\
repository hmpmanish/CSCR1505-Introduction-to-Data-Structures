// making of linked list with functions
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void append();
void add_begin();
int length();
void insert();
void del();
void display();
struct node{
    int data;
    struct node *link;
};
struct node *ROOT=NULL;

void main()
{
    clrscr();
    append();
    append();
    append();
    add_begin();
    length();
    insert();
    del();
    display();
    getch();
}

void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter the value of node");
    scanf("%d",& temp->data);
    temp->link=NULL;
    if(ROOT==NULL)
    {
	ROOT=temp;
    }
    else
    {
	struct node*p;
	p=ROOT;
	while(p->link!=NULL)
	{
	    p=p->link;
	}
	p->link=temp;
    }
}

void add_begin()
{
   struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter the value of node");
    scanf("%d",& temp->data);
    temp->link=NULL;
    if(ROOT==NULL)
    {
	ROOT=temp;
    }
    else
    {
	temp->link=ROOT;
	ROOT=temp;
    }
}

int length()
{
    struct node *p;
    int count=0;
    p=ROOT;
    while(p!=NULL)
    {
	count++;
	p=p->link;
    }
    return(count);
}

void insert()
{
  int loc;
  int i=1;
  struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    printf("enter the value of node");
    scanf("%d",& temp->data);
    temp->link=NULL;

    printf("enter the location at where you want to insert new node");
    scanf("%d",&loc);

    if(loc <1 && loc>length())
    {
	printf("out of range");
    }
    else
    {
	if(ROOT==NULL)
	{
	    ROOT=temp;
	}
	else
	{
	    struct node*p;
	    p=ROOT;
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
void display()
{
    struct node *p;
    p=ROOT;
    while(p!=NULL)
    {
	printf("%d->",p->data);
	p=p->link;
    }
}

void del()
{
 int loc;
 int i =1;
 struct node*p;
 printf("enter location to delete:");
 scanf("%d",&loc);

 if(loc<=length())
 {
	if(loc==1)
	{
		p=ROOT;
		ROOT=ROOT->link;
		p->link=NULL;
		free(p);
	}
	else
	{
	struct node *p,*q;
	p=ROOT;

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
