#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[2020],b[2020],n,m,i;
int main()
{
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
		a[i]=abs(b[i]-m);
	}
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=i;j++)
			if(a[j]>a[i])
			{
				int  t=a[j];
				a[j]=a[i];
				a[i]=t;
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
			else 
			if(a[j]==a[i]&&b[j]>b[i])
			{
				int  t=a[j];
				a[j]=a[i];
				a[i]=t;
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
	}
	for(i=1;i<=n;i++)
	printf("%d\n",b[i]);
	return 0;
}