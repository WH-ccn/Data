#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int num;
	long long distance;
}data;
data a[1005]={0};

int compare(const void *p,const void *q)
{
	data *a=(data *)p, *b=(data *)q;
	if(a->distance > b->distance)
	    return 1;
	else if(a->distance < b->distance)
	    return -1;
	else 
	{
		if(a->num > b->num)
		    return 1;
		else if(a->num < b->num)
		    return -1;
		else
		    return 0;
	}
}

int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i].num);
		a[i].distance=fabs(a[i].num-m);
	}
	qsort(a+1,n,sizeof(data),compare);
	for(i=1;i<=n;i++)
	    printf("%d\n",a[i].num);
	return 0;
}