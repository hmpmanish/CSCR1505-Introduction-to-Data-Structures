// making of linked list with functions
#include<stdio.h>
#include<stdlib.h>

void append();
void add_begin();
int length();
void insert();
void display();
struct node{
    int data;
    struct node *link;
};
struct node *ROOT=NULL;

void main()
{
    append();
    append();
    append();
    add_begin();
    length();
    insert();
    display();
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
  struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int loc;
    int i=1;
    printf("enter the value of node");
    scanf("%d",& temp->data);
    temp->link=NULL;

    printf("enter the location at where you want to insert new node");
    scanf("%d",&loc);

    if(ROOT==NULL)
    {
        ROOT=temp;
    }
    else
    {
        struct node*p;
        p=ROOT;
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp->link=p->link;
        p->link=temp;

    }  
}

void display()
{
    struct node *p;
    p=ROOT;
    while(p!=link)
    {
        printf("%d->->",p->data);
        p=p->link;
    }

}
