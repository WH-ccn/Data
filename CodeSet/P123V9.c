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
	
	for (int x=0; x<n; ++x)
		scanf("%lld", &a[x]);
	
	superSort(a, n, m);
	
	for (int y=0; y<n; ++y) 
		printf("%lld\n", a[y]);
	return 0;
}

ll superSort(ll a[], int n, ll m)
{
	ll tempJ=0, tempJ1=0, hold;
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
	
	for (int k=0; k<n; k++)
	{
		for (j=k+1; j<n; j++)
		{
			tempJ = labs(a[k] - m);
			tempJ1 = labs(a[j] - m);
			if ((tempJ == tempJ1) && (a[k] > a[j]))
			{
				hold = a[k];
				a[k] = a[j];
				a[j] = hold;
			}
		}
	}
}

ll labs(ll num)
{
	if (num <0) 
		num = -num;
	return num;
}