#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
long long a[1000];
long long absolute(long long x)
{
	if(x<0)
		return -x;
	else
		return x;
}
int smaller(long long a,long long b,int m)
{
	if(absolute(a-m)<absolute(b-m))
		return 1;
	else if(absolute(a-m)==absolute(b-m))
	{
		if(a<b)
			return 1;
		else
			return 0;
	}
	return 0;
}
void bubbleSort(long long a[],int n,int m)
{
	int i,j;
	long long temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(smaller(a[j],a[j+1],m)==0)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	int m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	bubbleSort(a,n,m);
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}