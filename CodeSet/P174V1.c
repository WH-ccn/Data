#include <stdio.h>
int x[1010];
int y[1010];
int main()
{
	int a,n,i,j,m,flag,hold,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		x[i]=a;
		y[i]=x[i]-m;
	    if(y[i]<0) y[i]=-y[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(i=0;i<n;i++)
		{
			if(x[i]>m) y[i]=x[i]-m;
			else y[i]=m-x[i];
		}
		for(j=0;j<n-1;j++)
		{
			if(y[j]>y[j+1])
			{
				x[j]=hold;
				x[j]=x[j+1];
				x[j+1]=hold;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
	}
return 0;
}