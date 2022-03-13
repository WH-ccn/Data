#include<stdio.h>
long long a[1002];
long long jdz(x,y);
int main()
{   int i=0,m,n,j=0;
    long long hold;
	scanf("%d%d",&n,&m);
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	if(jdz(a[j],m)>jdz(a[j+1],m))
	{
		hold=a[j+1];
		a[j+1]=a[j];
		a[j]=hold;
	}else if(jdz(a[j],m)==jdz(a[j+1],m))
	{
		if(a[j]>a[j+1])
		{
			hold=a[j+1];
		a[j+1]=a[j];
		a[j]=hold;
		}
	}i=0;
	while(i<n)
	{
		if(i<n-1)
	printf("%lld\n",a[i]);
	else if(i=n-1)
		printf("%lld",a[i]);
		i++;
	}
	return 0;
}
long long jdz(long long x,int y)
{
	if(x-y>=0)
	return x-y;
	else if(x-y<0)
	return y-x;
}