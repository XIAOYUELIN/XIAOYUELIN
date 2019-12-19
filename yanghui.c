#include<stdio.h>
int main()
{
	int n=0,q,w,e,ctr,num[100][100],num1[100];
	while(1)
{
	scanf("%d",&num1[n]);
		n++;
		if(getchar()=='\n')
			break;
	}
	for(e=0;e<n;e++)
	{
		for(q=0;q<num1[e];q++)
		{
			num[q][0]=1;
			for(w=1;w<=q;w++)
			{
				num[q][w]=num[q-1][w-1]+num[q-1][w];
			}
		}
		for(q=0;q<num1[e];q++)
		{
			for(w=0;w<q;w++)
				printf("%d ",num[q][w]);
			printf("%d",num[q][q]);
		printf("\n");
		}
                printf("\n");
	}
}
