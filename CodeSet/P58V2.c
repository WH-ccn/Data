#include <stdio.h>
long long abs_(long long );
int main()

{
	int n,m,i=0,j=0;
	long long a[10000],b[10000],temp;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{b[i]=abs_(a[i]-m);
	}
	  for(i=0;i<n-1;i++)
	  {if((b[i]>b[i+1])||(b[i]=b[i+1])&&(a[i]>a[i+1]))
	  {temp=a[i];
	  a[i]=a[i+1];
	  a[i+1]=temp;
	  }
	  }
	  
	for(i=0;i<n;i++)
	printf("%lld\n",a[i]);
	
	
	return 0;
}



long long abs_(long long t)
{
if(t<0)
t=-t;
return t;}