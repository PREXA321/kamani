#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start=NULL;
struct node* getnode()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    return(temp);
}
void main()
{

        int n;
        printf("1.insert \n 2.display\n");
        scanf("%d",n);
        if(n==1)
        {
            struct node *p;
            p=getnode();
            fflush(stdin);
            scanf("%d",&p->data);
            start=p;
            p->link=NULL;
            printf("%d",start->data);
        }

    getch();
}
