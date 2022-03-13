#include <stdio.h>
#include <math.h>

int main()
{
	int n,m,a[1000]={0},d,i=0,j,k,hold;
	scanf("%d%d\n",&n,&m);
	int p=n;
	while(p--)
	{
		scanf("%d",&d);
		a[i]=d;
		i++;
	}
	for(j=0;j<n-1;j++)
	{
		for(k=0;k<n-1-j;k++)
		{
			if(fabs(a[k]-m)>fabs(a[k+1]-m))
			{
				hold=a[k];
				a[k]=a[k+1];
				a[k+1]=hold;
			}
			else if(fabs(a[k]-m)==fabs(a[k+1]-m))
			{
				if(a[k]>a[k+1])
				{
					hold=a[k];
				    a[k]=a[k+1];
				    a[k+1]=hold;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}