#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,j,k,h,q,w,i=0,o=0;
	long long a[100000];
	scanf("%d%d",&n,&m);
	while(i<n)
	{
		scanf("%lld",&a[i]);
		i++;
	}
	for(j=0;j<n-1;j++)
	for(k=0;k<n-1-j;k++)
	{
		q=abs(a[k]-m);
	    w=abs(a[k+1]-m);
	if(q>w)
	{
		h=a[k];
		a[k]=a[k+1];
		a[k+1]=h;
	}
}
	while(o<n)
	{
		printf("%lld\n",a[o]);
		o++;
	}
	return 0;
}