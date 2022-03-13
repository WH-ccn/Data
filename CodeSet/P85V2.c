#include<stdio.h>
int main()
{
	int n,i,t,k,m,c,p,s;
	scanf("%d %d\n",&n,&t);
	
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>t)
		{
			b[i]=(a[i]-t);
		}
		if(a[i]<=t)
		{
			b[i]=(t-a[i]);
		}
	}
	for(k=0;k<(n-1);k++)
	{
		for(m=0;m<n-1-k;m++)
		{
		if(b[m]>b[m+1])
		{
		c=b[m];p=a[m];
		b[m]=b[m+1];a[m]=a[m+1];
		b[m+1]=c;a[m+1]=p;
	    }
	    else
		{
	    continue;
	    }
	    }
    }
    for(s=0;s<n;s++)
    {
    	printf("%d\n",a[s]);
	}
}