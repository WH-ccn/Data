#include<stdio.h>
#include<stdlib.h> 
long long a[1002];
long long d(long long a,long long m);
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
    int i;
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	while(1)
	{   
	    int i=0,flag=0;
		long long hold=0; 
		while(i<n-1)
		{
			if (d(a[i],m)>d(a[i+1],m))
			{
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
				flag++; 
			}
			else if(d(a[i],m)==d(a[i+1],m))
			{
				if(a[i]>a[i+1])
				{
					hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
				flag++;
				}
			}
			i++;
		}
		if (flag==0)
		break;
	}	
	long long k;
	for (k=0;k<n;k++)
	printf("%lld\n",a[k]);
	return 0;
}
long long d(long long a,long long m)
{
	if(a-m>=0)
	return a-m;
	else if(a-m<0)
	return m-a;
}