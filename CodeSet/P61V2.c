#include <stdio.h>
long long f(long long);
int main()
{
	long long a[10002];
	int n,m,i=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	int j=0,hold;  
    for(i=0;i<n-1;i++)
    {
    
    	for(j=0;j<n-1-i;j++)
    	{
    		if(f(a[j]-m)>f(a[j+1]-m))
        	{
				hold=a[j];
    		   a[j]=a[j+1];
    		   a[j+1]=hold;
    	
			}
		  if(f(a[j]-m)==f(a[j+1]-m))
			{if(a[j]>a[j+1])
			  {
			  hold=a[j];
    		  a[j]=a[j+1];
    		  a[j+1]=hold;
    	    }
			}
			
		}
	
		
	} 
   for(i=0;i<n;i++)
   printf("%lld\n",a[i]);
   return 0;
}
long long f(long long x)
{
	if(x>=0)
	return x;
	else 
	return -x;
}