#include<stdio.h>
long long abs(long long x);
int main()
{
	int n,m,i,j,x;
	long long a[1001],hold;
	scanf("%d %d",&n, &m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);				
	}
    for(i=0;i<n-1;i++)
    {
     for(j=0;j<n-1-i;j++)
	 {
     if(abs(a[j]-m)>abs(a[j+1]-m))
	 {
      hold=a[j];
     a[j]=a[j+1];
     a[j]=hold;
    }
     else if(abs(a[j]-m)==abs(a[j+1]-m))
     {
       if(a[j]>a[j+1])
     	{
     	      hold=a[j];
              a[j]=a[j+1];
              a[j+1]=hold;	
		 }
	 }
 }
}
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;	
}
long long abs(long long x)
{
	
	if(x>=0)
	x=x;
	else if(x<0)
	x=-x;
}