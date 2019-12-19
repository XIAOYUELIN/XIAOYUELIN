#include<stdio.h>
#include<string.h>
char*phd(char str[]);
int mia(char ctr1[],char ctr2[])
{
	int m;
	m=strcmp(ctr1,ctr2);
	return m;
}
int pdsf(char ctr1[],char ctr2[]);
int main()
{
	char str1[100000],str2[100000];
	char *p1=str1,*p2=str2;
	int k,i;
	while(scanf("%s %s",str1,str2)!=EOF)
	{
		if(str1[0]=='+')
		{
			p1=&str1[1];
		}
		if(str2[0]=='+')
		{
			p2=&str2[1];
		}
		p1=phd(p1);
		p2=phd(p2);
		k=mia(p1,p2);
		if(k==0)
			printf("YES\n");
		else
			printf("NO\n");
	}

}
char *phd(char str[])
{
	char str0[100000];
	char *p=str;
	int j,k,l=0,i;
	k=strlen(str);
	for(i=0;i<k;i++)
	{
		if(str[i]!='0')
			break;
	}
	p=&str[i];
	for(i=k-1;i>=0;i--)
	{
		if(str[i]!='0')
			break;
	}
	if(str[i]=='.')
		str[i]='\0';
	else
		str[i-1]='\0';
	return p;
}

