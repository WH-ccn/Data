#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[1000];
	int n,m;
	scanf("%d%d\n", &n,&m);
	for (int x = 0; x < n; x++)
	{
		scanf("%d", &a[x]);
	}
	int i, j, hold;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
		{
			if (abs(a[j] - m) > abs(a[j + 1] - m))
			{
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
			}
			else if (abs(a[j] - m) == abs(a[j + 1] - m))
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