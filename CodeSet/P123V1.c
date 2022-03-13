#include <stdio.h>
#include <stdlib.h>
int superSort(int [], int, int);
int a[1005]={0};
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	
	for (int i=0; i<n; ++i)
	{
		scanf("%d", &a[i]);
	}
	
	superSort(a, n, m);
	
	for (int j=0; j<n; ++j) 
		printf("%d\n", a[j]);
	return 0;
}

int superSort(int a[], int n, int m)
{
	int tempJ=0, tempJ1=0, i, j, hold, flag;
	for (i=0; i<n-1; ++i)
	{
		flag = 0;
		for (j=0; j<n-1-i; j++)
		{
			tempJ = abs(a[j] - m);
			tempJ1 = abs(a[j+1] - m);
			if (tempJ > tempJ1)
			{
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
				flag = 1;
			}
		}
		if (0 == flag) 
		break; 
	}
}