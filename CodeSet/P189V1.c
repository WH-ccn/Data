#include<stdio.h>
#define eps 1e-15
long long take(int,int);
long long ab(long long);
int n[1001];
int main()
{
    int t,m,k,i,j,hold;
    scanf("%d%d",&t,&m);
	for(k=0;k<t;k++)
	{
		scanf("%d",&n[k]);
	}	
	for(i=0;i<t-1;i++)
	{
		for(j=0;j<t-1;j++)
		if((take(n[j],m)-take(n[j+1],m))>eps)
		{
			hold=n[j];
			n[j]=n[j+1];
			n[j+1]=hold;
		}
	}
	for(i=0;i<t;i++)
	printf("%d\n",&n[i]);
	return 0;
}
long long take(int x,int y)
{
	long long p;
	p=x-y;
	return ab(p);
}
long long ab(long long q)
{
	if(q>=eps)
	return q;
	else
	return -q;
}