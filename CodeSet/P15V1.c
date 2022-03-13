#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int a[2000];
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(int i=0;i<n-1;i++)
	for(int j=0;j<n-1-i;j++)
	{
		if(abs((long long)(a[j]-m))>abs((long long)(a[j+1]-m)))
		{
			int  m;
			m=a[j];
			a[j]=a[j+1];
			a[j+1]=m;
		}
	}
		for(int i=0;i<n;i++)
	{
        printf("%d\n",a[i]);
	}
}