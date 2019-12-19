#include<stdio.h>
int main()
{
	int i,h,j,k,m=0,n,ctr=0,num[100],o=0;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
			for(n;n<=m;n++)
			{
			h=n/100;
			j=(n/10)%10;
			k=n%10;
			if((h*h*h+j*j*j+k*k*k)==n)
			{
				num[o]=n;
				o++;
			}
			}
			if(o==0)
				printf("no\n");
			else
			{
				for(ctr=0;ctr<o-1;ctr++)
					printf("%d ",num[ctr]);
				printf("%d\n",num[o-1]);
			}
			o=0;
	}
}
				
