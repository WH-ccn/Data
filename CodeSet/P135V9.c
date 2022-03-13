#include<stdio.h>
int main()
{    
	int n,m;
	int i,j,t;
	long long c,d,e;
	scanf("%d %d",&n,&m);
	long long a[1025];
	long long b[1025];
	b[0]=((-2147486348)*2);
		for(t=1;t<=n;t++)
	{
		scanf("%lld",&a[t]);
	if (a[t]>m)
	{
		b[t]=a[t]-m;
	}
	else{
		b[t]=m-a[t];
	}
	}
	for(i=1;i<=n;i++)
	{     
		for(j=1;j<=(n-i);j++)
		{
			if (b[j]>b[j+1])
			{
				c=b[j];
				b[j]=b[j+1];
				b[j+1]=c;
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
				
			}
			else if (b[j]==b[j+1])
			{
				if(a[j]>a[j+1])
				{
					e=a[j];
					a[j]=a[j+1];
					a[j+1]=e;
					
				}
			}
		
			
		}
	}
	for (i=1;i<=n;i++)
	{
		printf("%lld\n",a[i]);

	}
	return 0;
}