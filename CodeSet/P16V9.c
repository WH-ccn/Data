#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp(const void *a,const void*b );
typedef struct _data
{
long long	int num;
long long int key;
}data;
long long int f(long long int n)
{
	if(n<0) return -n;
	else return n;
}
int main()
{
    long long int n,m;
    data a[1005];
    scanf("%lld%lld",&n,&m);
    for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i].num);
		a[i].key=f(a[i].num-m);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++)
	{
		printf("%lld\n",a[i].num);
	}
	return 0;
}
int cmp(const void*a,const void*b )
{
	data*x=(data*)a;
	data*y=(data*)b;
	if(x->key<y->key) return -1;
	else if(x->key>y->key) return 1;
	else if(x->num<y->num) return-1;
	else if(x->num>y->num) return 1;
	else return 0;
}