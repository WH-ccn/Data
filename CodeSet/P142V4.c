#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int a[], int n);
long long absl(long long x);
int m;
int main()
{
	int i,n;
	int num[1005];
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		{
			scanf("%d", &num[i]);
				
		}
	bubbleSort(num,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
 } 
 void bubbleSort(int a[], int n)
{
	int i, j;
	int hold;
	for( i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(absl(a[j]-m) > absl(a[j+1]-m))
			{
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
			}
		}
	}
	for( i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-1-i; j++)
		{
			if(absl(a[j]-m) == absl(a[j+1]-m)&&a[j] > a[j+1])
			{
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
			}
		}
	}
}
 long long absl(long long x)
 {
 	if(x<0)
 		x=-1*x;
	return x;	
 }