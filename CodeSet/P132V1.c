#include<stdio.h>
#include <math.h>
void bubble(long long [],int ,int );
long long abs_l(long long );

int main()

{
	int n,m;
	long long a[1005]={0};
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	bubble(a,n,m);
	for(int i=0;i<n;i++)
    {
		printf("%lld\n",a[i]); 
	}
	return 0;
}

void bubble(long long b[],int n,int m)
{
	
	long long  hold;
	for(int i=0;i<n-1;i++)
	{
	  
	  for(int j=0;j<n-i-1;j++)
	  {
	     if(abs_l(b[j]-m)>abs_l(b[j+1]-m))
	     {
		   hold=b[j];
		   b[j]=b[j+1];
		   b[j+1]=hold;
	     }
	     else if(abs_l(b[j]-m)==abs_l(b[j+1]-m))
	     {
	     	  if(b[j]>b[j+1])
	     	  {
	     	  	 hold=b[j];
		         b[j]=b[j+1];
		         b[j+1]=hold;
			   }
		 }
	  
	  }
   }
}

long long abs_l(long long a)
{
    return (a>0?a:-a);
}