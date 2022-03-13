#include<stdio.h>
long long a[1005];
long long pd(long long a,long long b)
{
	if(a>=b)return a-b;
	else return b-a;
}
int main()
{
	long long n,m;
	scanf("%lld %lld",&n,&m);
	for(long long  i=0;i<n;i++)
	scanf("%lld",&a[i]);
	for(long long i=0;i<n-1;i++)
	  for(long long j=0;j<n-1-i;j++)
	  {
	  	if(pd(a[j],m)>pd(a[j+1],m))
	  	{
	  		long long o=a[j+1];
	  		a[j+1]=a[j];
	  		a[j]=o;
		  }
			if(pd(a[j],m)==pd(a[j+1],m))
			{
				if(a[j]>a[j+1])
					{
	  		long long o=a[j+1];
	  		a[j+1]=a[j];
	  		a[j]=o;
		  }  
			}
	  }
	  for(long long i=0;i<n;i++)
	  printf("%lld\n",a[i]);
}