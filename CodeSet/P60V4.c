#include<stdio.h>
void bubble(long long a[],long long b[],int n)
{
	int i,j;
	long long hold1,hold2; 
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if((b[j]>b[j+1])||(b[j]==b[j+1])&&(a[j]>a[j+1]))
			{
				hold1=b[j];
				b[j]=b[j+1];
				b[j+1]=hold1;
				hold2=a[j];
				a[j]=a[j+1];
				a[j+1]=hold2;
				
			}
}
int main()
{
	int n,m,i,j;
	long long a[1001],b[1001];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=a[i]-m;
		if(b[i]<0)
		b[i]=-b[i];
	}	
		bubble(a,b,n);
		for(i=0;i<n;i++)
		{
			printf("%lld\n",a[i]);
		}
	
}