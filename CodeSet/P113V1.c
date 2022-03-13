#include<stdio.h> 
long long abs(long long);
int main()
{
	int n,j,i,m;
	
	long long t;
	scanf("%d%d",&n,&m);
	long long a[n];
	for(j=0;j<n;j++)
	{
		scanf("%lld",&a[j]);
	}
	for(i=0;i<n-1;i++)
	{
	
		for(j=0;j<n-1;j++){
	
		if(abs(a[j+1]-m)<abs(a[j]-m))
		{
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;
		}
		else if(abs(a[j+1]-m)==abs(a[j]-m))
		{
			if(a[j]>a[j+1])
			{
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;
			}
			
		}
	}
}
	for(j=0;j<n;j++)
	{
		printf("%lld\n",a[j]);
	}
}
long long abs(long long a)
{
	if(a<0)
	a=-a;
	return a;
}