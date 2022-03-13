#include<stdio.h> 
#include<stdlib.h> 

void bubbleSort(long long a[], int n,long long b[])
{
int i, j,  flag;
long long hold1,hold2;
for (i = 0; i < n-1; i++)
{
	flag = 0;
	for (j = 0; j < n-1-i; j++)
	{
		if (a[j] > a[j + 1])
		{
		hold1 = a[j];	 hold2=b[j];
		a[j] = a[j + 1]; 	b[j]=b[j+1];
		a[j + 1] = hold1; 	b[j+1]=hold2;
		
		
		flag = 1;		
		}		
}
if (0 == flag)
	break;
}
}

void Sort(long long a[], int n,long long b[])
{
	int i,flag,j;
	long long hold1;

	for (i = 0; i < n-1; i++)
{
	flag = 0;
	for (j = 0; j < n-1-i; j++)
	{
		if (a[j] ==a[j + 1])
		{
		 hold1=b[i+1];
			b[i+1]=b[i];
			b[i]=hold1;
		
		flag = 1;		
		}		
}
if (0 == flag)
	break;
}
}
long long arr[100000];
 long long brr[100000];
int main()
{
 	
	long long m;
	int n,i;
	long long x;
	scanf("%d %lld",&n,&m);
	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		brr[i]=x;
		x=x-m;
		if(x<0)
		{
			x=-x;
		}
		arr[i]=x;		
	}	
	bubbleSort(arr,n,brr);
	Sort(arr,n,brr);
	for(i=0;i<n;i++)
	{
		printf("%lld\n",brr[i]);
	}		
	return 0;
}