#include <stdio.h>
#include <stdlib.h>

#define ll long long
ll superSort(ll [], int, ll);
ll labs(ll);

int main()
{
	ll a[1005]={0};
	int n;
	ll m;
	scanf("%d%lld", &n, &m);
	
	for (int i=0; i<n; ++i)
		scanf("%lld", &a[i]);
	
	superSort(a, n, m);
	
	for (int j=0; j<n; ++j) 
		printf("%lld\n", a[j]);
	return 0;
}

ll superSort(ll a[], int n, ll m)
{
	ll tempJ=0, tempJ1=0, hold, flag;
	int i, j;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1; j++)
		{
			tempJ = labs(a[j] - m);
			tempJ1 = labs(a[j+1] - m);
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
			tempJ = labs(a[k] - m);
			tempJ1 = labs(a[j] - m);
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

ll labs(ll num)
{
	if (num <0) num = -num;
	return num;
}