#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long a[1005];
	long long n,m;
long long abss(long long a)
{
	if(a<0)return -a;
	return a;
}
int cmp(const void*a,const void*b)
{
	if(abs(*((long long*)a)-m)==abss(*((long long*)b)-m))return *((long long*)a)>*((long long*)b)?1:-1;
	return abss(*((long long*)a)-m)>abss(*((long long*)b)-m)?1:-1;
}
int main()
{
	scanf("%lld %lld",&n,&m);
	for(long long i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	 } 
	 qsort(a,n,sizeof(a[0]),cmp);
	 	for(long long i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	 } 
 } 