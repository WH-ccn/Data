#include <stdio.h>
#include<stdlib.h>
void bubble(int [], int);
int m;
int main()
{
	int n,i,a[1005];
	scanf("%d %d",&n,&m);
	for(i=0; i<n; i++)
	{ 
		scanf("%d",&a[i]);
	}
	bubble(a, n);
	for(i=0; i<n; i++) 
	printf("%d\n", a[i]);
	return 0; 
}

void bubble(int a[], int n)
{
	int i, j, hold, flag;
	for (i = 0; i < n-1; i++)
	{
		flag = 0;
		for (j = 0; j < n-1-i; j++) 
		{
			if (abs(a[j]-m) > abs(a[j + 1]-m))
			{
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				flag = 1;
			}
		}
		if (0 == flag)
		break; 
	} 
}