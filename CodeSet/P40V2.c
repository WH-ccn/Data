#include<stdio.h>
#include<math.h>
int num[1010] = { 0 };
long long dist(int a,int b)
{
	long  long c;
	c = (long long)(a - b);
	if (c < 0)
		c = (-1) * c;
	return c;
}
void main()
{
	int n,m,i=0,j,k,p,time;
	int temp;
	scanf("%d %d", &n,&m);
	time = n;
	while (time--)
	{
		scanf("%d", &num[i]);
		i++;
	}
	for (j = 0; j < n; j++)
	{
		for (k = 0; k < n - 1 - j; k++)
		{
			if (dist(num[k],m)>dist(num[k+1],m))
			{
				temp = num[k + 1];
				num[k + 1] = num[k];
				num[k] = temp;
			}
			else if (dist(num[k], m) == dist(num[k + 1], m))
			{
				if (num[k] > num[k + 1])
				{
					temp = num[k + 1];
					num[k + 1] = num[k];
					num[k] = temp;
				}
			}
		}
	}
	for (p = 0; p < n; p++)
		printf("%d\n", num[p]);
	return 0;
}