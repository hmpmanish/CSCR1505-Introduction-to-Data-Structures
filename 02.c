
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *root = NULL;

void append();
void display();
int countnodes();

void main()
{
    int n, i;

    clrscr();

    printf("How many nodes do you want to append? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        append();
    }

    display();

    printf("\nTotal nodes = %d", countnodes());

    getch();
}

void append()
{
    struct node *temp, *p;

    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter node value: ");
    scanf("%d", &temp->data);

    temp->link = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        p = root;

        while (p->link != NULL)
        {
            p = p->link;
        }

        p->link = temp;
    }
}

void display()
{
    struct node *p;

    p = root;

    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->link;
    }

    printf("NULL");
}

int countnodes()
{
    int count = 0;
    struct node *p;

    p = root;

    while (p != NULL)
    {
        count++;
        p = p->link;
    }

    return count;
}
