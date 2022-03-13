#include<stdio.h>
#include<stdlib.h>
long long int b[1000]={0},c[1000]={0};
long long int cmp(long long int a,long long int m)
{
	if(a>=m)
		return a-m;
	else
		return m-a;
}
int main()
{
	int n,m;
	int i,j;
	long long int temp,temp1;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
		c[i]=cmp(b[i],m);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=b[j];
				temp1=c[j];
				b[j]=b[j+1];
				c[j]=c[j+1];
				b[j+1]=temp;
				c[j+1]=temp1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%lld\n",b[i]);
	}
	return 0;
}