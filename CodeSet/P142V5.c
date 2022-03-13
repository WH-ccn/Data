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
	for (i = 0; i < n - 1; i++)//Ã°ÅÝÅÅÐò
{
	int flag = 0;
	for (j = 0; j < n - i - 1; j++) 
	{ 
		long long dis1 = absl(arr[j] - m);
		long long dis2 = absl(arr[j + 1] - m);
		if ((dis1 > dis2) || (dis1 == dis2 && arr[j] > arr[j + 1]))//½»»»Ìõ¼þ
		{
			flag = 1;
			long long temp = arr[j];
			arr[j] = arr[j + 1]; 
			arr[j + 1] = temp;
		}
	}
	if (!flag)break;
}
}
 long long absl(long long x)
 {
 	if(x<0)
 		x=-1*x;
	return x;	
 }