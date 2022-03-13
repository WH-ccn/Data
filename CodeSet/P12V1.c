#include <stdio.h>
#include <string.h>
#include <math.h>
long long abs1(int,int);
int main() 
{
	int n,m;
	scanf("%d", &n);
	scanf("%d", &m);
	int a[1005];
	int hold;
	for (int i=0; i<n;i++)
	{
		scanf("%d", &a[i]);
		
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
				if(abs1(a[j],m)>abs1(a[j+1],m))
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			
			}	
		}

	}
	for(int i=0; i<n;i++)
	{
		printf("%d\n", a[i]);
	}
	
	
	return 0;
}

long long abs1(int a, int m)
{
	long long k;
	if(m>a)
	{
		k=m-a;
		return k;
	}
	else
	{
		k=a-m;
		return k;
	}

}