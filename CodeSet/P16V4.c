#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
long long int jdz(long long int x)
{
	if(x<0)
	{
		return -x;
	}
	else
	{
		return x;
	}
}



int main()
{
	int n,m,i,b[1005],ret,num;
    long long int a[1005];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		a[i]=llabs(b[i]-m);
	}

	for(num=n-1;num>0;num--)
	{
		for(i=0;i<num;i++)
		{
			if(a[i]>a[i+1])
			{
				ret=b[i];
				b[i]=b[i+1];
				b[i+1]=ret;
				ret=a[i];
				a[i]=a[i+1];
				a[i+1]=ret;
			
			}
		else if(a[i]==a[i+1])
			{
				if(b[i]>b[i+1])
				{
						ret=b[i];
				b[i]=b[i+1];
				b[i+1]=ret;
				}
			}
		
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	
	return 0;
}