#include<stdio.h>
long long abs_(long long);
void bubble_sort(long long [],long long n);
long long m;
int main()
{
	long long n,i,j,t;
	long long a[1005]={0};
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	    for(j=i;j<n;j++)
	    {
	    	if((abs_(a[i]-m)==abs_(a[j]-m))&&a[i]>a[j])
	    	{
	    		t=a[j];
	        	a[j]=a[i];
	        	a[i]=t;
			}
		}
	
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}
long long abs_(long long x)
{
	return x<0? -x:x; 
}
void bubble_sort(long long a[],long long n)
{
	long long i,j,temp;
	for(i=0;i<n-1;i++)
	    for(j=0;j<n-i-1;j++)
	        if(abs_(a[j]-m)>abs_(a[j+1]-m))
	        {
	        	temp=a[j];
	        	a[j]=a[j+1];
	        	a[j+1]=temp;
			}
}