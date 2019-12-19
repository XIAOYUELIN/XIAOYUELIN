#include<stdio.h>
#include<stdlib.h>
struct ListNode {
    int data;
    struct ListNode *next;
};
struct ListNode *readlist()
{
    struct ListNode *p,*head,*p1;
    p=head=(struct ListNode*)malloc(sizeof(struct ListNode));
    p1=(struct ListNode*)malloc(sizeof(struct ListNode));
    while(1)
    {
        scanf("%d",&p1->data);
        if(p1->data==-1)
        break;
        p->next=p1;
        p=p1;
        p1=(struct ListNode*)malloc(sizeof(struct ListNode));
    }
    p->next=NULL;
    free(p1);
    return head;
}
struct ListNode *deletem( struct ListNode *L, int m )
{
    struct ListNode *p=L,*p2=L;
    while(p->next!=NULL)
    {
        p2=p->next;
        if(p2->data==m)
        {
            p->next=p2->next;
            free(p2);
        }
        else
        p=p->next;
    }
    return L;
}
int main()
{
    int m;
    struct ListNode *p;
    p=readlist();
    scanf("%d",&m);
    p=deletem(p,m);
    while(p->next!=NULL)
    {
        p=p->next;
        printf("%d ",p->data);
    }
    return 0;
}
