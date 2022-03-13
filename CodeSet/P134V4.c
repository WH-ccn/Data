#include <stdio.h>
#include <stdlib.h>
long long llbs(long long);
void bubble(long long [], long long);
int m;
int main()
{
	long long n,i,a[1005];
	scanf("%lld %lld",&n,&m);
	for(i=0; i<n; i++)
	{ 
		scanf("%lld",&a[i]);
	}
	bubble(a, n);
	for(i=0; i<n; i++) 
	printf("%lld\n", a[i]);
	return 0; 
}

void bubble(long long a[], long long n)
{
	long long i, j, hold, flag;
	for (i = 0; i < n-1; i++)
	{
		flag = 0;
		for (j = 0; j < n-1-i; j++) 
		{
			if (llbs(a[j]-m) > llbs(a[j + 1]-m))
			{
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				flag = 1;
			}
			else if(llbs(a[j]-m) == llbs(a[j + 1]-m))
			{
				if (a[j] > a[j + 1])
				{
					hold = a[j];
					a[j] = a[j + 1];
					a[j + 1] = hold;
					flag = 1;
				}
			}
		}
		if (0 == flag)
		break; 
	} 
}

long long llbs(long long a)
{
	if(a<0)
	{
		a=-a;	
	}
	else if(a>=0)
	{
		a=a;	
	}
	return a;	
}