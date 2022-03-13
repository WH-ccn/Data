#include <stdio.h>
#include <stdlib.h> 
int a[1001] = {0};
int b[1001] = {0};
void bubble (int [],  int a[], int n);
int main()
{
	int n, m, i = 1, j = 1, s = 1, h = 1,w = 1;
	scanf ("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		scanf ("%d", &a[i]);
	}
	for (j = 1; j <= n; j++)
	{
		b[j] = abs(a[j] - m);
	}
	
	bubble (b, a, n);
	for (h = 1; h<=n; h++)
	{
		printf ("%d\n", a[h]);
	}
	
	return 0;
	
	
}

void bubble (int b[], int a[], int n)
{
	int x, y;
	int hold, hold2 ;
	for (x=1; x<= n; x++)
	{
		for (y = 1; y<= n-x; y++)
		{
			if (b[y] > b[y+1])
			{
				hold = a[y];
				a[y] = a[y+1];
				a[y+1] = hold;
				hold2 = b[y];
				b[y] = b[y+1];
				b[y+1] = hold2;
				
			}
		}
	}
}