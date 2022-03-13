#include<stdio.h>
#include<stdlib.h>
long long abc[100000];
long long m;
long long ab(long long a)
{
long long ret=a;
	if(ret>=m)
	return ret-m;
	else return m-ret;
}
long long min(long long a,long long b)
{
	if(a>b)
	return a;
	else return b;
}
int compare(const void *a,const void *b)
{
	long long pa=*(long long*)a;
	long long pb=*(long long*)b;
	pa=ab(pa);
	pb=ab(pb);
	if((pa-pb)!=0)
	return pa-pb;
	else return min(pa,pb);
}
int main()
{
	long long n;
	scanf("%d%d",&n,&m);
	for(long long i=0;i<n;i++)
	scanf("%d",&abc[i]);
	qsort(abc,n,sizeof(abc[0]),compare);
	for(long long i=0;i<n;i++)
	printf("%d\n",abc[i]);
}