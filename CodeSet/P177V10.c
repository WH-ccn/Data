#include<stdio.h>
long long int b[1080]={0},i,a[1080]={0},s;
void bubblesort(long long int b[],long long int a[] , int n);
long long int llabs(long long int s);
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);	
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		s = llabs(a[i]-m);	
		
		b[i]=s;
	}
	
	bubblesort(b, a, n);
	for(i=0;i<n;i++)
		printf("%lld\n",a[i]);
	return 0;
}
void bubblesort(long long int b[],long long int a[] , int n)
{
	long long int i, j,temp;
	long long int hold;
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
long long int llabs(long long int s)
{ 
	if(s<0)
	s=-s;
	return s;
}