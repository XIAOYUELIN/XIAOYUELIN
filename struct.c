#include<stdio.h>
struct student
{
    char name[20];
    char num[10];
    float math;
    float chi;
    float elg;
    float cpp;
    char ex[10];
};
struct student students[30];
int main()
{
    int i,h,j,k,num2[30];
    float num1[30],s1=0,s2=0,s3=0,s4=0;
    for(i=0;i<30;i++)
    num2[i]=i;
    printf("\t姓名\t学号\t性别\t数学\t语文\t英语\tC语言\n");
    for(i=0;i<30;i++)
    scanf("\t%s\t%s\t%s\t%f\t%f\t%f\t%f",students[i].name,students[i].num,students[i].ex,&students[i].math,&students[i].chi,&students[i].elg,&students[i].cpp);
    printf("\n");
    for(i=0;i<30;i++)
    num1[i]=(students[i].math+students[i].chi+students[i].elg+students[i].cpp)/4;
    for(i=0;i<30;i++)
    for(h=i+1;h<30;h++)
        if(num1[i]<num1[h])
        {
            j=num2[i];
            num2[i]=num2[h];
            num2[h]=j;
            k=num1[h];
            num1[h]=num1[i];
            num1[i]=k;
        }
    printf("\t姓名\t学号\t性别\t数学\t语文\t英语\tC语言\t平均成绩\n");
    for(i=0;i<4;i++)
    printf("\t%s\t%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",students[num2[i]].name,students[num2[i]].num,students[num2[i]].ex,students[num2[i]].math,students[num2[i]].chi,students[num2[i]].elg,students[num2[i]].cpp,num1[i]);
    for(i=0;i<30;i++)
    {
    s1+=students[i].math;
    s2+=students[i].chi;
    s3+=students[i].elg;
    s4+=students[i].cpp;
    }
    printf("\n");
    printf("\t数学\t语文\t英语\tC语言\n");
    printf("\t%.2f\t%.2f\t%.2f\t%.2f\n",s1/30,s2/30,s3/30,s4/30);
    return 0;
}
