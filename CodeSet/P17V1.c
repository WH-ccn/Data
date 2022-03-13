#include <stdio.h>
#include <stdlib.h>

void Super_bubbleSort(long long a[], int n, int m);
int abs_LL(long long x);

int main()
{
	long long a[1005];
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
	long long mum1,mum2,num1,num2,hold;
	
	for(j=0;j<n;j++)
	{
	
		for(i=0;i<n-j-1;i++)
		{
			mum1=a[i]-m;
			num1=abs_LL(mum1);
			
			mum2=a[i+1]-m;
			num2=abs_LL(mum2);
			
			if(num1>num2)
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
}

int abs_LL(long long x)
{
	if(x>=0)
	x=x;
	
	else
	x=-x;
	
	return x;
}