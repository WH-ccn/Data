#include<stdio.h>
int main()
{    
	int n,m;
	int i,j,t;
	long long c,d;
	scanf("%d %d",&n,&m);
	int  a[1025];
	long long b[1025];
	b[0]=((-2147486348)*2);
		for(t=1;t<=n;t++)
	{
		scanf("%d",&a[t]);
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
		
			
		}
	}
	for (i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);

	}
	return 0;
}