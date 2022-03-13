#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cmp(const void *a,const void*b );
double num[100005];
double eps=1e-8;
typedef struct _data
{
	int num;
long long int key;
}data;
int main()
{
     int n,m;
    data a[1005];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i].num);
		a[i].key=(long long )(llabs(a[i].num-m));
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i].num);
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