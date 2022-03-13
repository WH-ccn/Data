#include<stdio.h>
#include<stdlib.h>
long long abc(long long x)
{
	if(x>=0) return x;
	if(x<0) return -x;
}
int main()
{
	long long i=0,m,n,M,N;
	scanf("%lld%lld",&n,&m);
	long long hold,a[1001]={0};
	long long b[1001]={0};
    for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=abc(a[i]-m);
	}
	i--;
	for(M=0;M<n;M++)
	{
		for(N=0;N<=i;N++)
		{
			if(b[N]<b[N+1]||((b[N]==b[N+1])&&(a[N]<=a[N+1])))
			{
				hold=a[N+1];
				a[N+1]=a[N];
				a[N]=hold;
				hold=b[N+1];
				b[N+1]=b[N];
				b[N]=hold;
			}
		}
		printf("%lld\n",a[i]);
		i--;
	}
	return 0;
}