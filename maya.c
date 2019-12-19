#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,n,num[100000],num2[100000],year[100000],day[100000],h,x;
	struct {
		char *name;
		char str[20];
	}stre[100000];
       char  *tzolkin[20]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok",  "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
       char  *haab[19]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
       scanf("%d",&m);
       for(i=0;i<m;i++)
	       scanf("%d. %s %d",&num[i],stre[i].str,&num2[i]);
       for(i=0;i<m;i++)
       {
	       for(j=0;j<19;j++)
	       {
		      x= strcmp(haab[j],stre[i].str);
		      if(x==0)
			      break;
	      }
	      n=num2[i]*365+j*20+num[i]+1;
	      year[i]=(n/260);
	      k=n%260;
       
	      for (h = 0; h < k; h++) {
			      day[i] = h%13+1;
			      stre[i].name=tzolkin[h%20];
	      }
       }
       printf("%d\n",m);
       for(i=0;i<m-1;i++)
	       printf("%d %s %d\n",day[i],stre[i].name,year[i]);
	       printf("%d %s %d",day[m-1],stre[m-1].name,year[m-1]);
	       
}
