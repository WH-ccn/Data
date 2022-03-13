#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long a[2020],b[2020],n,m,i;
long long abbs(long long t)
{
	if(t>0)return t;
	return 0-t;
}
int main()
{
	scanf("%lld%lld",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&b[i]);
		a[i]=abbs(b[i]-m);
	}
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=i;j++)
			if(a[j]>a[i])
			{
				long long  t=a[j];
				a[j]=a[i];
				a[i]=t;
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
			else 
			if(a[j]==a[i]&&b[j]>b[i])
			{
				long long  t=a[j];
				a[j]=a[i];
				a[i]=t;
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
	}
	for(i=1;i<=n;i++)
	printf("%lld\n",b[i]);
	return 0;
}