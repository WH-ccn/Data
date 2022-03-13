#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void bubblesort(long long a[],long long,long long);
long long longabs(long long,long long);
long long a[1005]={0};
int main()
{
	long long n,m;
	int i;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	bubblesort(a,n,m);
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}
void bubblesort(long long a[],long long n,long long m)
{
	long long hold,flag;
	int k,j;
	for(k=0;k<n-1;k++)
	{
		flag = 0;
		for(j=0;j<n-1-k;j++)
		{
			if(longabs(a[j],m)>longabs(a[j+1],m))
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag = 1;
			}
			else if(longabs(a[j],m)==longabs(a[j+1],m))
			{
				if(a[j]-a[j+1]>0)
				{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag = 1;
				}
			}
		}
		if(0==flag)
			break;
	}
}

long long longabs(long long f,long long m)
{
	
	if(f-m<0)
	{
		return m-f;
	}
	else
	{
		return f-m;
	}
	
	
}