#include <stdio.h>
#include <stdlib.h>
int abs(int x);
int main()
{
    int n,m,i,x,y,k,j,h;
    scanf("%d%d",&n,&m);
    int a[n],t[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&t[i]);
    	a[i]=abs(t[i]-m);
	}
	for(j=0;j<n-1;j++)
	{
		for(k=0;k<n-1-j;k++)
		{
			if(a[k]>a[k+1])
			{
					x=a[k];y=t[k];
			a[k]=a[k+1];t[k]=t[k+1];
			a[k+1]=x;t[k+1]=y;
			}
		
		}
	}
	for(h=0;h<n;h++)
	printf("%d\n",t[h]);
	return 0;
 }