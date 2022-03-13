#include<stdio.h>
long long a[1000] = { 0 };
void paixu(long long a[], int n, long long m);
long long abs(long long x);
int main()
{
	int n;
	long long m;
	scanf("%d%lld", &n, &m);
	int i;
	for (i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	paixu(a,n,m);
	for (i = 0; i < n; i++)
		printf("%lld\n", a[i]);
	return 0;
}
void paixu(long long a[], int n,long long m)
{
	int i, j, flag;
	long long hold;
	for (i = 0; i < n - 1; i++)
	{
		flag = 0;
		for(j=0;j<n-1-i;j++)
		if (abs(a[j]-m) > abs(a[j + 1]-m))
		{
			hold = a[j];
			a[j] = a[j + 1];
			a[j + 1] = hold;
			flag = 1;
		}
		if (flag == 0)
			break;
	}
}
long long abs(long long x)
{
	if (x < 0)
		return -x;
	return x;
}