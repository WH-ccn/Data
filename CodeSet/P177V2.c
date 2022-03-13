#include<stdio.h>
#include<stdlib.h>
long long int llabs(long long int , long long int);
void bubblesort(long long int b[],long long int a[] ,long long int n);
int main()
{
	long long int n, m, i, a[1080]={0},b[1080]={0};
	scanf("%lld %lld",&n,&m);	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=llabs(a[i]-m);
	}
	bubblesort(b,a, n);
	for(i=0;i<n;i++)
		printf("%lld\n",a[i]);
	printf("\n");
	return 0;
}
void bubblesort(long long int b[],long long int a[] ,long long int n)
{
	long long int i, j, hold,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(b[j] > b[j+1])
			{
				hold = b[j];
				b[j] = b[j+1];
				b[j+1] = hold;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
}
int llabs(long long int a[] , long long int m)
{
	long long int i,def;
	def = a[i]-m;
	if(def<0)
	{
	def = -def;
	return def;
	}else
	return def;
	
}