#include<stdio.h>
#include<stdlib.h>
int n;
long long m;
long long llabs(long long num)
{
	if(num<0) num=-num;
	return num;
}
int s_abs(const void*p1,const void*p2)
{
	long long* a=(long long*)p1;
	long long* b=(long long*)p2;
	if (llabs(*a-m)>llabs(*b-m)) return 1;
	else if(llabs(*a-m)==llabs(*b-m)&&(*a>*b)) return 1;
	else if (llabs(*a-m)<llabs(*b-m)) return -1;
	else if (llabs(*a-m)==llabs(*b-m)&&(*a<*b)) return -1;
	else return 0;
}
long long a[1005];
int main(void)
{
	int i;
	scanf("%d%lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	qsort(a+1,n,sizeof(a[0]),s_abs);
	for(i=1;i<=n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
 } 