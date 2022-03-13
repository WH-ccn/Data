#include<stdio.h>
int num(int p,int q);
int main()
{
	long long int n,i,j;
	int m,a[1000];
	scanf("%lld %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		long long int p,q;
		int t;
		for(j=i+1;j<n;j++)
		{
			t=a[i];
			p=num(a[i],m);
			q=num(a[j],m);
			if(p>q)
			{
				a[i]=a[j];
				a[j]=t;
			}
			else if(p==q&&a[j]<a[i])
			{
				a[i]=a[j];
				a[j]=t;				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
 } 
 int num(int p,int q)
 {
 	return((p-q)*(p-q));
 }