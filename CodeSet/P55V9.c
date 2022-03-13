#include<stdio.h>
long long abc(long long x)
{
	if(x>0) return x;
	if(x<=0) return -x;
}
int main()
{
	long long i=0,n,M,N,m;
	long long hold,held,a[1001]={0};
	long long b[1001]={0};
	scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=a[i]-m;
		b[i]=abc(b[i]);
	}
	i--;
	for(M=0;M<n;M++)
	{
		for(N=0;N<i;N++)
		{
			if(b[N]<b[N+1]||((b[N]==b[N+1])&&(a[N]<a[N+1])))
			{
				hold=a[N+1];
				a[N+1]=a[N];
				a[N]=hold;
				held=b[N+1];
				b[N+1]=b[N];
				b[N]=held;
			}
		}
		printf("%lld\n",a[i]);
		i--;
	}
	return 0;
}