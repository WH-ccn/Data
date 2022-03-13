#include<stdio.h>
long long abx(long long);
int main()
{
	int i,flag,j; 
	long long ar[1005],m,tmp,n;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++)
	scanf("%lld",&ar[i]);
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if((abx(ar[j]-m)>abx(ar[j+1]-m))||((abx(ar[j]-m)==abx(ar[j+1]-m))&&(ar[j]>ar[j+1])))
			{
			tmp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=tmp;
			flag=1;
		    }
		}
			if(flag==0)
		    break;
}
for(i=0;i<n;i++)
printf("%lld\n",ar[i]);
return 0;
}
long long abx(long long a)
{
	return a<0?-a:a;
}