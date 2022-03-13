#include<stdio.h>
#include<stdlib.h>
int n,m;
int s_abs(const void*p1,const void*p2)
{
	int* a=(int*)p1;
	int* b=(int*)p2;
	if (abs(*a-m)>abs(*b-m)) return 1;
	else if(abs(*a-m)==abs(*b-m)&&(*a>*b)) return 1;
	else if (abs(*a-m)<abs(*b-m)) return -1;
	else if (abs(*a-m)==abs(*b-m)&&(*a<*b)) return -1;
	else return 0;
}
int a[1005];
int main(void)
{
	int i;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a+1,n,sizeof(a[0]),s_abs);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
 } 