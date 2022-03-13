#include <stdio.h>
long long int a[1010],b[1010];
void zyl(long long int a[] ,long long int b[],long long int );
int main ()

{
	long long int n,m,i;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i]-m;
		if(b[i]<0)
		{
			b[i]=-b[i];
		}
	}
	zyl(a,b,n);
	for(i=0;i<n;i++)
	{
		printf("%lld\n",a[i]);
	}
	return 0;
}
void zyl(long long int a[],long long int b[],long long int n)
{
long long int i, j, hold;
for (i = 0; i < n-1; i++)
{
for (j = 0; j < n-1-i; j++)
{
if (b[j] > b[j + 1])
{
	hold = b[j];
b[j] = b[j + 1];
b[j + 1] = hold;
hold = a[j];
a[j] = a[j + 1];
a[j + 1] = hold;
}
else if(b[j]==b[j+1])
{
	if(a[j]>a[j+1])
	{
	hold = b[j];
b[j] = b[j + 1];
b[j + 1] = hold;
	hold = a[j];
	a[j] = a[j + 1];
	a[j + 1] = hold;
	}
}
}
}
}