#include<stdio.h>
int m,n;
long long c[1001];
long long abs(long long a)
{
	long long b;
	if(a-m>=0)
	b=a-m;
	else
	b=-(a-m);
	return b;
}
void aid(long long a[],int n)
{
	int i,j;
	double k;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	if(a[j]>a[j+1])
	{
		k=c[j];
		c[j]=c[j+1];
		c[j+1]=k;
	}
}
int main()
{
	int i;
	long long a[1001];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
 		scanf("%lld",&a[i]);
	 }
	  for(i=0;i<n;i++){
  	 	c[i]=a[i];
}
  	 for(i=0;i<n;i++){
  	 	a[i]=abs(a[i]);
}
    aid(a,n);
     for(i=0;i<n;i++){
	 	printf("%lld\n",c[i]);
	 	
	 }
	 return 0;
}