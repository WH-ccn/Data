#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
	int a[1000];
	int n,m;
	scanf("%d%d", &n,&m);
	for (int x = 0; x < n; x++)
	{
		scanf("%d", &a[x]);
	}
	int i, j, hold;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
		{
			if (labs(a[j] - m) > labs(a[j + 1] - m))
			{
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
			}
			else if (labs(a[j] - m) == labs(a[j + 1] - m))
			{
				if (a[j] > a[j + 1])
				{
					hold = a[j];
					a[j] = a[j + 1];
					a[j + 1] = hold;
				}
			}
		}
	for (int y = 0; y < n; y++)
	{
		printf("%d ", a[y]);
		printf("\n");
	}
	return 0;
}