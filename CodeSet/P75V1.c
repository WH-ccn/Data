#include<stdio.h>

long long b[1005];
long long a[1005];
long long m,n,i,j,c;

long long jdz(long long a)
{
	if(a<0)
	{
		a=-a;
	 } 
	 return a;
}

int main()
{
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=a[i];
		a[i]=jdz((a[i]-m));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
				c=b[j];
				b[j]=b[j+1];
				b[j+1]=c;
			}
			else if(a[j]==a[j+1])
			{
				if(b[j]>b[j+1])
				{
					c=a[j];
					a[j]=a[j+1];
					a[j+1]=c;
					c=b[j];
					b[j]=b[j+1];
					b[j+1]=c;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%lld",b[i]);	
	}
}