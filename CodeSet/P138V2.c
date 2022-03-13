#include<stdio.h>  
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#define PI (acos(-1))
#include<string.h>
#define eps 1e-8
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define maxn 10010
int cmp(const void*p1,const void*p2);
long long m;
int main()
{
	long long n,i,num[1005];
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
		scanf("%lld",&num[i]);
	qsort(num,n,sizeof(num[0]),cmp);
	for(i=0;i<n;i++)
	{
		printf("%lld\n",num[i]);
	}
	return 0;
}

int cmp(const void*p1,const void*p2)
{
	int x=*(long long*)p1,y=*(long long*)p2;
	if(llabs(x-m)<llabs(y-m))	return -1;
	else if(llabs(x-m)>llabs(y-m))	return 1;
	else
	{
		if(x<y)	return -1;
		else if(x>y)	return 1;
		else return 0;
	}
}

long long llabs(long long a)
{
	return a>0?a:-a;
}