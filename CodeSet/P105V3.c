#include <stdio.h>
#include <stdlib.h>
long long fabs(long long x);
int main()
{
    long long n,m,i,x,y,k,j,h;
    scanf("%lld%lld",&n,&m);
    int a[n],t[n];
    for(i=0;i<n;i++)
    {
    	scanf("%lld",&t[i]);
    	a[i]=fabs(t[i]-m);
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
	printf("%lld\n",t[h]);
	return 0;
 } 
long long fabs(long long x)
{
	if(x<0)
	{
		return -x;
	}
	       return x;
}