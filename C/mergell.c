#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
    int data;
    struct link *next;
}link;
void create(link *);
void merge (link *,link *,link *);
void display(link *);
void main()
{
    link *list1,*list2,*list3;
    list1=(link *) malloc(sizeof(link));
    if (list1==NULL)
    {
        printf("Memory allocation Unsuccessful");
        exit(1);
    }
    list2=(link *) malloc(sizeof(link));
    if (list1==NULL)
    {
        printf("Memory allocation Unsuccessful");
        exit(1);
    }
    list3=(link *) malloc(sizeof(link));
    if (list3==NULL)
    {
        printf("Memory allocation Unsuccessful");
        exit(1);
    }
    create(list1);
    create(list2);
    merge(list1,list2,list3);
    display(list1);
    display(list2);
    display(list3);
}
void create(link *list)
{
    char ch='y';
    int var;
    printf("Enter the value of first node:");
    scanf("%d",&var);
    list->data=var;
    list->next=NULL;
    printf("\n Do you want to enter another value:(y/n)");
    fflush(stdin);
    scanf("%c",&ch);
    while(ch=='y')
    {
        list->next=(link *)malloc(sizeof(link));
        if(list->next==NULL)
        {
            printf("\nMemory Allocation Unsuccessful");
            exit(1);
        }
        list=list->next;
        printf("\n Enter the value for another node:");
        scanf("%d",&list->data);
        list->next=NULL;
        printf("\n Do you want to continue?y/n");
        fflush(stdin);
        scanf("%c",&ch);


    }

}
void merge(link *l1,link *l2,link *l3)
{
        l3->data=l1->data;
        l3->next=NULL;
        l1=l1->next;
        while(l1!=NULL)
        {
            l3->next=(link *)malloc(sizeof(link));
            l3=l3->next;
            l3->data=l1->data;
            l3->next=NULL;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            l3->next=(link *)malloc(sizeof(link));
            l3=l3->next;
            l3->data=l2->data;
            l3->next=NULL;
            l2=l2->next;
        }

}

void display(link *list)
{
    while(list!=NULL)
    {
        printf("%d\t",list->data);
        list=list->next;
    }
    printf("\n");
}
