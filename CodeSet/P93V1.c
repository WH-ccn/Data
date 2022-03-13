#include<stdio.h>
#include<math.h>
int main()
{	
	int n,m,i,j,hold1,a[1001];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x[1001];
	for( i=0; i < n; i++)
	{
		x[i]=abs((a[i]-m));
	}
		for(i=0; i < n; i++)
 		for(j=0; j < n-i-1; j++)
 		if(x[j] > x[j+1])
 		{	
			hold1 = a[j];
 	 		a[j] = a[j+1];
 			a[j+1] = hold1;
 		}
		if(x[j]==x[j+1])
		{
			if(a[j]>a[j+1])
			{
				hold1 = a[j];
				a[j]  = a[j+1];
				a[j+1]= hold1;
			}
		}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}