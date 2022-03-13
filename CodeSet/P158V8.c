#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
long long num[1000001];

int m;

int paixu(const void *p1, const void *p2)
{
	long long x,y;	
	x=*(long long *)p1-m;
	if(x<0)
	{
		x=-x;
	} 
	y=*(long long *)p2-m;
	if(y<0)
	{
		y=-y;
	} 	
	if ( x < y ) 
	{
		return -1;
	}
	else if ( x > y )
	{
		return 1;
	}
	else
	{
		if ( *(long long *)p1 < *(long long  *)p2 ) return -1;
		if ( *(long long  *)p1 > *(long long  *)p2 ) return 1;
		return 0;
	} 
}

int main()
{
	int i,n,z,h,x;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&num[i]);
	}
	
	qsort(num,n,sizeof(num[0]),paixu);
	
	for(i=0;i<n;i++)
	{
		printf("%lld\n",num[i]);
	}

	return 0;
}