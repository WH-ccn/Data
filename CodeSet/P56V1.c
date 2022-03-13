#include<stdio.h>
#include<stdlib.h>

int m;
int ab(int a)
{
int ret=a;
	if(ret>=m)
	return ret-m;
	else return m-ret;
}
int min(int a,int b)
{
	if(a>b)
	return a;
	else return b;
}
int compare(const void *a,const void *b)
{
	int pa=*(int*)a;
	int pb=*(int*)b;
	pa=ab(pa);
	pb=ab(pb);
	if((pa-pb)!=0)
	return pa-pb;
	else return min(pa,pb);
}
int main()
{
	int n;int a[1000];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	qsort(a,n,sizeof(a[0]),compare);
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
}