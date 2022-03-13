#include<stdio.h>
long long num[1001];
long long ABS(long long a)
{
	if(a>0)
		return a;
	else
		return -1ll*a;
}
int main()
{
	long long n, m, temp1, temp2, temp;
	int i,j;
	scanf("%lld%lld", &n, &m);
	for(i=0;i<n;i++)
		scanf("%lld", &num[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			temp1=ABS(num[j]-m);
			temp2=ABS(num[j+1]-m);
			if(temp1>temp2)
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%lld\n", num[i]);
	return 0;
}