#include<stdio.h>
long long fa(long long a,long long b);
int main()
{int a,j,i;
scanf("%d",&a);
long long b[a],c,m;
scanf("%lld",&m);
for(i=0;i<a;i++)
{
	scanf("%lld",&b[i]);
}
for(i=a-1;i>=0;i--)
{
	for(j=a-2;j>=a-i-1;j--)
	{
		if(fa(b[j],m)>fa(b[j+1],m)||fa(b[j],m)==fa(b[j+1],m)&&b[j]>b[j+1]){
			c=b[j];
			b[j]=b[j+1];
			b[j+1]=c;
		}
	}
	printf("%lld\n",b[a-1-i]);
}
	return 0;
}
long long fa(long long a,long long b)
{
	long long c;
	c=a-b;
	if(b>a)
	{
		c=b-a;
	}
	return c;
}