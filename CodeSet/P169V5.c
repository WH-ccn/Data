#include<stdio.h>
#include<math.h>

void bubblesort(long long a[],long long n,long long m);
long long jdz(long long a,long long m);

int main ()
{
	long long n,m;
	scanf("%lld%lld",&n,&m);
	int i=0;
	long long a[1005];
	while(i<n)
	{
		scanf("%lld",&a[i]);
		i++;
	}
	bubblesort(a,n,m);
	for(int j=0;j<n;j++)
	{
		printf("%lld\n",a[j]);
	}
	return 0;
	
	
}

void bubblesort(long long a[], long long  n,long long m)
{
	int i, j, temp, flag;
	for(i = 0; i < n-1; i++)
	{
		flag = 0;
		for(j = 0; j < n-1-i; j++)
			if( jdz(a[j],m) > jdz(a[j+1],m) )
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
					
			}
			else if(jdz(a[j],m)==jdz(a[j+1],m))
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					
				}
			
			}

	}
}

long long jdz(long long a,long long m)
{
		return (a-m>=0? a-m:m-a);
}