#include<stdio.h>
long long absq(int a,int b)
{
	long long s;
	s=(a>b)?(a-b):(b-a);
	return s;
}
int main()
{
	int n,m,arr[1002]={0},u;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
		{
			if(absq(arr[j],m)>absq(arr[j+1],m))
			{
				u=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=u;
			}
			else if(absq(arr[j],m)==absq(arr[j+1],m))
			{
				if(arr[j]>arr[j+1])
				{
					u=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=u;
				}
			}
		}
			
	for(int k=0;k<n;k++)
		printf("%d\n",arr[k]);
	return 0;
}