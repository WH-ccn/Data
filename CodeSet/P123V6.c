#include <stdio.h>
#include <stdlib.h>
int superSort(int [], int, int);

int main()
{
	int a[1005]={0};
	int n, m;
	scanf("%d%d", &n, &m);
	
	for (int i=0; i<n; ++i)
		scanf("%d", &a[i]);
	
	superSort(a, n, m);
	
	for (int j=0; j<n; ++j) 
		printf("%d\n", a[j]);
	return 0;
}

int superSort(int a[], int n, int m)
{
	int tempJ=0, tempJ1=0, i, j, hold, flag;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1; j++)
		{
			tempJ = abs(a[j] - m);
			tempJ1 = abs(a[j+1] - m);
			if(tempJ > tempJ1)   //Ωµ–Ú≈≈¡–”√< 
			{
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
			}
		}
	
	j=0;
	hold = 0;
	tempJ = 0;
	tempJ1 = 0;
	
	for (int k=0; k<n; k++)
	{
		for (j=k+1; j<n; j++)
		{
			tempJ = abs(a[k] - m);
			tempJ1 = abs(a[j] - m);
			if (tempJ == tempJ1)
			{
				if(a[k] > a[j])
				{
				hold = a[k];
				a[k] = a[j];
				a[j] = hold;
				continue;
				}
			}
		}
	}
}