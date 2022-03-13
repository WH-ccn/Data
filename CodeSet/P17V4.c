#include <stdio.h>
#include <stdlib.h>
long long a[1005];
void Super_bubbleSort(long long a[], int n, int m);
long long abs_LL(long long x);

int main()
{

	int n,m,i;
	
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	
	Super_bubbleSort(a,n,m);
	
	for(i=0;i<n;i++)
	printf("%lld\n",a[i]);
	
	return 0;
}

void Super_bubbleSort(long long a[], int n,int m)
{
	int i,j;
	long long num1,num2,hold;
	
	for(j=0;j<n;j++)
	{
	
		for(i=0;i<n-j-1;i++)
		{
			num1=a[i]-m;
			num1=abs_LL(num1);
			
			num2=a[i+1]-m;
			num2=abs_LL(num2);
			
			if(num1>num2)
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
			
			else if(num1==num2)
			{
				if(a[i]>a[i+1])
				{
					hold=a[i+1];
					a[i+1]=a[i];
					a[i]=hold;
				}
			}
		}
	}
}

long long abs_LL(long long x)
{
	if(x>=0)
	x=x;
	
	else
	x=-x;
	
	return x;
}