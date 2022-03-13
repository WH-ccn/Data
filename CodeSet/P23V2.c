#include <stdio.h>
void bubble(long long a[], int);
void bubble2(long long a[], int,long long);
long long abs(long long);
int main()
{
	int n,i;
	long long a[1005],m;
	scanf("%d%lld", &n, &m);
	for(i=0;i<n;i++)
	scanf("%lld", &a[i]);
	bubble(a,n);
	bubble2(a,n,m);
	for(i=0;i<n;i++)
	printf("%lld\n",a[i]);
	return 0;
}


void bubble(long long a[], int n)
{
	int i,j,flag;
	long long hold;
	for(i=0; i< n-1; i++)
	{	flag =0;
		for (j=0;j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				hold= a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag=1;
			}
		}
	if (flag==0) break;
	}
}



void bubble2(long long a[], int n,long long x)
{
	int i,j,flag;
	long long hold;
	for(i=0; i< n-1; i++)
	{	flag =0;
		for (j=0;j<n-1-i; j++)
		{
			if(abs(a[j]-x)>abs(a[j+1]-x))
			{
				hold= a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				flag=1;
			}
	
		}

	if (flag==0) break;
		
	}
} 

long long abs(long long x)
{
	if(x<0) return -x;
	else return x;
}