#include<stdio.h>
#include<stdlib.h>
long long abc(long long x)
{
	if(x>=0) return x;
	if(x<0) return -x;
}
int main()
{
	int i=0,n,M,N,m;
	long long hold,a[1001]={0};
	long long b[1001]={0};
	scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=a[i]-m;
		b[i]=abc(b[i]);
	}
	i--;
	for(M=0;M<n;M++)
	{
		for(N=0;N<=i;N++)
		{
			if(b[N]<b[N+1]||((b[N]==b[N+1])&&(a[N]<a[N+1])))
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