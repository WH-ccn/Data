#include<stdio.h>
#include<stdlib.h>

long long ab(long long,int);
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	long long t,a[1000],b[1000];
	for(int i1=0;i1<n;i1++)
	{
		scanf("%lld",&t);
		a[i1]=t;
		b[i1]=ab(t,m);
	}
	
	int i, j;
	double hold;
	for(i = 0; i < n-1; i++)
	{
		for( j = 0; j < n-1-i; j++)
		{
			if(b[j] > b[j+1])
			{
				hold = b[j];
				b[j] = b[j+1];
				b[j+1] = hold;
				
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
			}
			
			if(b[j] == b[j+1])
			{
				if(a[j] > a[j+1])
				{
					hold = a[j];
					a[j] = a[j+1];
					a[j+1] = hold;
				}
			}
		}
	}
	
	for(int i2=0;i2<n;i2++)
	{
		printf("%lld\n",a[i2]);
	}
	
	return 0;
}

long long ab(long long t1,int m1)
{
	long long d;
	if(t1<m1)
	d=m1-t1;
	else
	d=t1-m1;
	
	return d;
}