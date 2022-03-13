#include<stdio.h>
#include<stdlib.h>
long long main()
{
	long long n,m;
	scanf("%lld %lld",&n,&m);
	long long a[1005];
	long long i=0;
	while(scanf("%lld",&a[i])!=EOF)
	{
		i++;
	}
	long long j;
	long long hold;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(labs(a[j]-m)>labs(a[j+1]-m))
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
			else if(labs(a[j]-m)==labs(a[j+1]-m))
			{
			
				if(a[j]>a[j+1])
				{
					hold=a[j];
					a[j]=a[j+1];
					a[j+1]=hold;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%lld\n",a[i]);
}