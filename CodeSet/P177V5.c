#include<stdio.h>
void bubblesort(long long int b[],long long int a[] ,long long int n);
int main()
{
	long long int n, m, i, a[1080]={0},b[1080]={0};
	scanf("%lld %lld",&n,&m);	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		
		b[i]=a[i]-m;
		if(b[i]<0)
		b[i]=- b[i];
	}
	bubblesort(b, a, n);
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