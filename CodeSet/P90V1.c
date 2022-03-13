#include<stdio.h>
int num(long long int p,long long int q);
int main()
{
	long long int n,i,j;
	long long int m,a[1000];
	scanf("%lld %lld\n",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		long long int p,q;
		long long int t;
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
		printf("%lld\n",a[i]);
	}
	return 0;
 } 
 int num(long long int p,long long int q)
 {
 	return((p-q)*(p-q));
 }