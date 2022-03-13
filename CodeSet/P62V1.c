#include<stdio.h>
long long a[1001],b[1001],x;
int main()
{
	int n,m,i=0,j=0,k;
	long long hold1,hold2;
	scanf("%d%d",&n,&m);
	while(i<n)
	{
		scanf("%d",&a[i]);
		if(a[i]==m)
		k=i;
		i++;
	}
	i=0;
	while(i<n)
	{
		b[i]=abs(i-k);
		i++;
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	
		if(b[j]>b[j+1])
	{
		hold1=a[j];
		a[j]=a[j+1];
		a[j+1]=hold1;
	}
	else if(b[j]==b[j+1])
	{
		if(a[j]>a[j+1])
		{
			hold2=a[j];
		a[j]=a[j+1];
		a[j+1]=hold2;
		}
	}

	i=0;
	while(i<n)
	{
		if(i<n-1)
		printf("%d\n",a[i]);
		else if(i=n-1)
		printf("%d",a[i]);
		i++;
		
	}return 0;
	
}
long long abs(long long x)
{
	if(x>=0)
	return x;
	else if(x<0)
	{
		x=-x;
	return x;
	} 
}