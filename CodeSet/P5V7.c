#include<stdio.h>
long long int a[1002];
long long int Absolute(long long int x)
{
	if(x<0)
		return -x;
	return x;
}
void superBubbleSort(long long int a[],int n,long long int m)
{
	int i,j;
	long long int tmp;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(Absolute(a[j]-m)>Absolute(a[j+1]-m))
			{
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
}
int main()
{
	int n,i;
	long long int m;
	scanf("%d%lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	superBubbleSort(a,n,m);
	for(i=0;i<n;i++)
		printf("%lld\n",a[i]);
	return 0;
}