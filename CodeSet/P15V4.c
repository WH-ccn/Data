#include<stdio.h>
#include<math.h>
#include<stdlib.h>
unsigned long long judge(long long a,long long b)
{
	unsigned long long c;
	if(a<b)c=(unsigned long long)(b-a);
	else c=(unsigned long long)(a-b);
	return c;
}
long long a[2000];
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
		for(int i=0;i<n-1;i++)
	for(int j=0;j<n-1-i;j++)
	{
		if(judge(a[j],m)>judge(a[j+1],m))
		{
			long long  mi;
			mi=a[j];
			a[j]=a[j+1];
			a[j+1]=mi;
		}
	}
		for(int i=0;i<n;i++)
	{
        printf("%lld\n",a[i]);
	}
}