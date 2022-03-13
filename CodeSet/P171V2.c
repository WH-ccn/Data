#include <stdio.h>
long long a[9099];
int n,m,i;
long long ABS(long long x)
{
	if(x>0)return x;
	else return -x;
}
int cmp(const void *a,const void *b)
{
	if(ABS(*(long long *)a-m)- ABS(*(long long *)b-m)!=0)
		return ABS(*(long long *)a-m)- ABS(*(long long *)b-m);
	else return *(long long *)a-*(long long *)b;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	qsort(a,n,sizeof(long long),cmp);
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}