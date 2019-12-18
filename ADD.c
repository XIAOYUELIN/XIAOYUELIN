#include<stdio.h>
#include<string.h>
int  powe(char str3[])
{
	int m,n,j,k;
	m=strlen(str3);
	char *p=str3;
	for(j=0;j<m;j++)
		if(str3[j]!='0')
			break;
	return j;
}
int main()
{
	char str1[100000],str2[100000],str[100000],*p1=str1,*p2=str2;
	int max,min,i,j,k,l,ctr,m,n,as,ad;
	while((scanf("%s %s",str1,str2))!=EOF)
	{
		m=strlen(str1);
		n=strlen(str2);
		max=m>n?m:n;
		l=max;
		min=m>n?n:m;
		str[0]='0';
		for(i=0;i<max;i++)
			str[i+1]=(m>n?str1[i]:str2[i]);
		for(k=min-1;k>=0;k--)
		{
			str[l]+=((m>n?str2[k]:str1[k])-'0');
			if(str[l]>'9')
			{
				str[l]-=10;
				str[l-1]+=1;
			}
			l--;
		}
		for(j=max-min;j>=0;j--)
			if(str[j]>'9')
			{
				str[j]-=10;
				str[j-1]+=1;
			}
		ctr=powe(str);
		if(ctr>=max)
			printf("0");
 	        else
		{
		for(i=ctr;i<=max;i++)
				printf("%c",str[i]);
		}
		printf("\n");
	}
}
