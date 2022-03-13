#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[1005];
	int i=0;
	while(scanf("%d",&a[i])!=EOF)
	{
		i++;
	}
	int j;
	int hold;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(abs(a[j]-m)>abs(a[j+1]-m))
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
			else if(abs(a[j]-m)==abs(a[j+1]-m))
			{
			
				if(a[j]>a[j+1])
				{
					hold=a[j];
					a[j]=a[j+1];
					a[j+1]=hold;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}