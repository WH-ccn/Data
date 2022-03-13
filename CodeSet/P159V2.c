#include<stdio.h>
void bubbleSort(long long int a[][2], int n);
void bubble(long long int a[][2], int n);
int main(void)
{
	int n, m;
	scanf("%d %d",&n,&m);
	long long int a[n][2];
	long long int x = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%lld",&a[i][0]);
		x = a[i][0] - m;
		if(x < 0) {x = -x;}
		a[i][1] = x;
	}
	
	bubbleSort(a, n);
	bubble(a, n);
	
	for(int i=0; i<n; i++)
	printf("%lld\n",a[i][0]);
	
	return 0;
}

void bubbleSort(long long int a[][2], int n)
{
	int i, j, flag;
	long long int hold;
	for(i = 0; i < n-1; i++)
	{
		flag = 0;
		for(j = 0; j < n-1-i; j++)
		{
			if(a[j][1] > a[j+1][1])
			{
				hold = a[j][0];
				a[j][0] = a[j+1][0];
				a[j+1][0] = hold;
				hold = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = hold;
				flag = 1;
			}
	
		}
		
		if(0 == flag)
		break;
	}
}

void bubble(long long int a[][2], int n)
{
	
	int i, j, flag;
	long long int hold;
	for(i = 0; i < n-1; i++)
	{
		flag = 0;
		for(j = 0; j < n-1-i; j++)
		{
			if(a[j][1] == a[j+1][1] && a[j][0] > a[j+1][0])
			{
				hold = a[j][0];
				a[j][0] = a[j+1][0];
				a[j+1][0] = hold;
				hold = a[j][1];
				a[j][1] = a[j+1][1];
				a[j+1][1] = hold;
				flag = 1;
			}
		}
		
		if(0 == flag)
		break;
	}
}