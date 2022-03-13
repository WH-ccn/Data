#include<stdio.h>
long long a[10000],d[10000];
long long abc(long long x);
void bubbleSort(long long a[],long long d[],int n);
int main()
{
	long long c,b,n,m;
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&b);
		d[i]=b;
		c=abc(b-m);
		a[i]=c;
	}
 bubbleSort( a,d, n);	
	for(int i=0;i<n;i++)
	{
		printf("%lld\n",d[i]);
	}	
	return 0;
}
long long abc(long long x)
{
	if(x<0)
	{
		return -x;
	}
	else
	{
		return x;
	}
}
void bubbleSort(long long a[],long long d[],int n)
{
int  i, j, flag;
long long hold1,hold2;
for (i = 0; i < n-1; i++)
{
flag = 0;
for (j = 0; j < n-1-i; j++) {
if ((a[j] > a[j + 1])||(a[j]==a[j+1]&&d[j]>d[j+1]))
{
hold1 = a[j];
a[j] = a[j + 1];
a[j + 1] = hold1;
hold2 = d[j];
d[j] = d[j + 1];
d[j + 1] = hold2;
flag = 1; } }
if (0 == flag)
break; } }