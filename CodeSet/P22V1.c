#include <stdio.h>
int main()
{
	int i,j,n;
	long long int a[1010],b[1010],z,m,y;
	scanf("%d%lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=a[i]-m;
		if(b[i]<0)
		b[i]=0-b[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(b[j]>b[j+1])
			{
				z=a[j];
				a[j]=a[j+1];
				a[j+1]=z;
			}
			if(b[j]==b[j+1]&&a[j]>a[j+1])
			{
				z=a[j];
				a[j]=a[j+1];
				a[j+1]=z;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}