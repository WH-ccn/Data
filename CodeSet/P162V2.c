#include<stdio.h>
#include<stdlib.h>
long long shu[1005],yuan[1005];
void longabs (long long a[],int n,long long m)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]-m<0)
		a[i]=m-a[i];
		else
		a[i]=a[i]-m;
	}
}
void bubblesort(long long a[],long long b[],int n)
{ 
	int i,j;
	long long hold,holdy;
	for(i=0;i<n-1;i++)
	{
		
		for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1])
		{
			hold=a[j];holdy=b[j];
			a[j]=a[j+1];b[j]=b[j+1];
			a[j+1]=hold;b[j+1]=hold;
		
		}
		if(a[j]=a[j+1]&&b[j]>b[j+1])
		{
			hold=a[j];holdy=b[j];
			a[j]=a[j+1];b[j]=b[j+1];
			a[j+1]=hold;b[j+1]=hold;
			
		}
		
	}
}
int main() 
{
	int n;
	long long m;
	int i;
	scanf("%d %lld",&n,&m);
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&shu[i]);
	}
	for(i=0;i<n;i++)
	{
		yuan[i]=shu[i];
	}
	longabs(shu,n,m);
	bubblesort(shu,yuan,n);
	for(i=0;i<n;i++)
	printf("%lld\n",yuan[i]);
	
	
	return 0;
}