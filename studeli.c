#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};
struct stud_node *head, *tail;

void input()
{
    int m=0;
    struct stud_node *p2;
    head=tail=(struct stud_node *)malloc(sizeof(struct stud_node));
    p2=(struct stud_node *)malloc(sizeof(struct stud_node));
    head=p2;
    while(1)
    {
        scanf("%d",&p2->num);
        if(p2->num==0)
        break;
        scanf("%s%d",p2->name,&p2->score);
        m++;
        tail->next=p2;
        tail=p2;
        p2=(struct stud_node *)malloc(sizeof(struct stud_node));
    }
    tail->next=NULL;
    if(m!=0)
    free(p2);
}

int main()
{
    struct stud_node *p;
	
    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}
