#include<stdio.h>
#include<string.h>
#include<stdlib.h>
long long f(long long x)
{
	if(x<0) return -x;
	else return x;
}
int main()
{
	int n,m,i,j;

	scanf("%d%d",&n,&m);
	long long temp,b[n];
	long long a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
for(i=0;i<n-1;i++)
	{	
		for(j = 0; j < n-1-i; j++){
			if(f(a[j]-m)>f(a[j+1]-m)){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else if(f(a[i]-m)==f(a[j]-m)&&a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	
				printf("%lld\n",a[i]);
				
	}
	return 0;
 }