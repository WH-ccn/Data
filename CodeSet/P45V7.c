#include<stdio.h>
long long a[1219],b[1219];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,huan;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		if(a[i]>m)
		   b[i]=a[i]-m;
		else
		   b[i]=m-a[i];
	}
	for(int k=1;k<=n;k++)
	{
	 for(i=1;i<=n;i++)
      	{
		for(j=i;j<=n;j++)
		{
		    if(b[i]>b[j])
			{
				huan=a[i];
				a[i]=a[j];
				a[j]=huan;
				huan=b[i];
				b[i]=b[j];
				b[j]=huan;
			} 
			if(b[i]==b[j]&&a[i]>a[j])
			{
				huan=a[i];
				a[i]=a[j];
				a[j]=huan;
				huan=b[i];
				b[i]=b[j];
				b[j]=huan;
			}
		}
	}}
	for(j=1;j<=n;j++)
	printf("%lld\n",a[j]);
	return 0;	
}