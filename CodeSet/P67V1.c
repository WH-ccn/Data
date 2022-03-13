#include<stdio.h>
#include<stdlib.h>
int abs(int x);
int main()
{
	int num[1000]={0};
	int n,m,mid;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int k=n;k>0;k--)
	{
		for(int h=0;h<k-1;h++)
		{
			if(abs(num[h]-m)>abs(num[h+1]-m))
			{
				mid=num[h];
				num[h]=num[h+1];
				num[h+1]=mid;
			}
		}
	}
	for(int f=0;f<n;f++)
	{
		printf("%d\n",num[f]);
	}
	return 0;
}