#include <stdio.h>
long long abs(long long x)
{
	if(x<0)
	{
		x=-x;
	}
	return x;
}

int main()
{
	int n,i,j,flag;
	long long m,hold;
	scanf("%d%lld",&n,&m);
	long long a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
		    if (a[j]>a[j+1])
		    {
			    hold=a[j];
			    a[j]=a[j+1];
			    a[j+1]=hold;
			    flag=1;
		    }
	    }
	if (0==flag)
	break;
	}
	for (i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
		    if (abs(a[j]-m)>abs(a[j+1]-m))
		    {
			    hold=a[j];
			    a[j]=a[j+1];
			    a[j+1]=hold;
			    flag=1;
		    }
	    }
	if (0==flag)
	break;
	}
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}