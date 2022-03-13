#include<stdio.h>
void bbSort(long long int a[],int n,int m);
long long int myabs(long long int x);
int main()
{
	int n,m;
	long long int a[1005]={0};
	int i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lldd",&a[i]);
	}
	bbSort(a,n,m);
	return 0;
}
void bbSort(long long int a[],int n,int m)
{
	long long int hold;
	int i,t;
	for(i=0;i<n;i++)
	{
		for(t=0;t<n-i-1;t++)
		{
			if(((myabs(a[t]-m))-myabs(a[t+1]-m))==0)
			{
				if(a[t]<=a[t+1])
				continue;
				else
				{
					hold=a[t];
					a[t]=a[t+1];
					a[t+1]=hold;
				}
			}
			else if(((myabs(a[t]-m))-myabs(a[t+1]-m))>0)
			{
				hold=a[t+1];
				a[t+1]=a[t];
				a[t]=hold;
			}
			else if(((myabs(a[t]-m))-myabs(a[t+1]-m))<0)
			{
			continue;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return;
}
long long int myabs(long long int x)
{
	return x>=0? x:-x; 
}