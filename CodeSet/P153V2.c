#include <stdio.h>
long long a[2000];
long long f(long long,long long);
int main()
{
	long long n,m,i,b,c;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<=n-1;i++)
	scanf("%lld",&a[i]);
	for(b=0;b<=n-1;b++)
	{
		for(i=b+1;i<=n-1;i++)
		{
			if(f(a[i],m)<f(a[b],m))
			{
				c=a[i];
				a[i]=a[b];
				a[b]=c;
			}
			else if(f(a[i],m)==f(a[b],m))
			{
				if(a[i]<a[b])
				{
					c=a[i];
					a[i]=a[b];
					a[b]=c;
				}
			}
		}
	}
	for(i=0;i<=n-1;i++)
	printf("%lld\n",a[i]);
	return 0;
}
long long f(long long b,long long c)
{
	long long m;
	m=b-c;
	if(m<0)
	m=-m;
	return m;
}