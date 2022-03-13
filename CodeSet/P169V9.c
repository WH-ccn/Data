#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
long long f(long long x)
{
	if(x<0) return -x;
	return x;
}
int m;
int com(const void*a,const void*b)
{
	if(f(*(long long *)a-m)==f(*(long long*)b-m)) return *(long long*)a>*(long long*)b?1:-1;
	return f(*(long long*)a-m)>f(*(long long*)b-m)?1:-1;
}
int main()
{	
	int n,i;
	scanf("%d%d",&n,&m);
	long long a[n];
	for(i=0;i<n;i++) scanf("%lld",&a[i]);
	qsort(a,n,sizeof(a[0]),com);
	for(i=0;i<n;i++) printf("%lld\n",a[i]);
}