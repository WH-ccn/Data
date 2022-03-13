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
int m;
int main()
{
	int n,i,num[1005];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	qsort(num,n,sizeof(num[0]),cmp);
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}

int cmp(const void*p1,const void*p2)
{
	int x=*(int*)p1,y=*(int*)p2;
	if(abs(x-m)<abs(y-m))	return -1;
	else if(abs(x-m)>abs(y-m))	return 1;
	else
	{
		if(x<y)	return -1;
		else if(x>y)	return 1;
		else return 0;
	}
}