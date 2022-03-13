#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, j, m, a, b[2000] = { 0 }, a1, t, c[2000], h;
	scanf("%d%d", &n, &m);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		c[i] = a;
		a1 = abs(m-a);
		b[i] = a1;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-1-i; j++)
		{
			if (b[j] > b[j + 1])
			{
				t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
				h = c[j];
				c[j] = c[j + 1];
				c[j + 1] = h;

			}
			else if (b[j] = b[j + 1] && c[j] > c[j + 1])
			{
				t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
				h = c[j];
				c[j] = c[j + 1];
				c[j + 1] = h;

			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", c[i]);
		printf(" ");
	}


	return 0;
}