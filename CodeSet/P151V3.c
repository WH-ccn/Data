#include<stdio.h>
#include <math.h> 
#include <stdlib.h>
long long jdz(long long num)
{
	if(num<0)
	num=-num;
	return num;
}

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[1000],i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
	int flag = 0;
	for(j=0;j<n-i-1;j++)
	{	
		long long d1=jdz( a[j]-m);
		long long d2=jdz( a[j+1]-m);
		if(d1>d2||(d1==d2&&a[j]>a[j+1]))
		{	flag = 1;
			int h;
			h=a[j];
			a[j]=a[j+1];
			a[j+1]=h;
		}
	}
	if (!flag)break;
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}