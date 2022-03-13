#include<stdio.h>
#include<math.h>
void bbSort(int a[],int n,int m);
int main()
{
	int n,m;
	int a[1005]={0};
	int i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bbSort(a,n,m);
	return 0;
}
void bbSort(int a[],int n,int m)
{
	int hold,i,t;
	for(i=0;i<n;i++)
	{
		for(t=0;t<n-i-1;t++)
		{
			if(((abs(a[t]-m))-abs(a[t+1]-m))==0)
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
			else if(((abs(a[t]-m))-abs(a[t+1]-m))>0)
			{
				hold=a[t+1];
				a[t+1]=a[t];
				a[t]=hold;
			}
			else if(((abs(a[t]-m))-abs(a[t+1]-m))<0)
			{
			continue;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return;
	
}