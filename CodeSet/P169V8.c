#include<stdio.h>
#include<string.h>
#include<math.h>
#define min(a,b) (a<b)?a:b
long long m;
long long g(long long a)
{
	if(a<m) return m-a;
	else if(a>=m) return a-m;
}
int main()
{
	int n;
	scanf("%d%lld",&n,&m);
	int i,j;
	long long a[n];
	for(i=0;i<n;i++) scanf("%lld",&a[i]);
	for(i=0;i<n-1;i++)
	{
		int f=1;
		for(j=0;j<n-1-i;j++)
		{
			if((g(a[j])>g(a[j+1]))||(g(a[j])==g(a[j+1])&&(a[j]>a[j+1])))
			{
				long long x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
				f=0;
			}
		}
		if(f) break;
	}
	for(i=0;i<n;i++) printf("%lld\n",a[i]);
}