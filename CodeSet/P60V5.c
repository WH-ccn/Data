#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
struct stu
{
	int x,y;
}s[1005];
int cmp( const void *p1 ,const void *p2)
{
stu*a=(stu *)p1 ,*b=(stu *)p2 ;
if(a->y<b->y)return -1;
if(a->y==b->y&&a->x>b->x)return 1;
if(a->y==b->y&&a->x<b->x)return -1;
if(a->y>b->y)return 1;
else return 0;
}
int main()
{
	long long m,n;
	int i;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&s[i].x);
		if(s[i].x<=m)
		s[i].y=m-s[i].x;
		else
		s[i].y=s[i].x-m;

	}
		qsort(s,n,sizeof(s[0]),cmp);
	for(i=0;i<n;i++)
	{
		printf("%lld\n",s[i].x);
	}
return 0;
}