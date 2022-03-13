#include<stdio.h>
#include<math.h>
long long int func(long long a,long long b)
{
	a=a-b;
	if(a<0)
	{
		a=-1*a;
		
	}
	return a;
}
int main()
{
	int n,i,j;
	long long int a[1001],tool,tool1,tool2,tooll;
	scanf("%d%lld",&n,&tool);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		for(j=i;j>0;j--)
		{
			tool1=func(a[j],tool);
			tool2=func(a[j-1],tool);
			if((tool1<tool2)||(tool1==tool2&&a[j]<a[j-1]))
			{
				tooll=a[j];
				a[j]=a[j-1];
				a[j-1]=tooll;
			}
			else
			{
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}