#include<stdio.h>
long long abs(long long,long long);
long long A[1000]={0};
long long B[1000]={0};
int main()
{
	int n,i,j,j1;
	long long m,ni,a,atemp,btemp;
	scanf("%d%lld",&n,&m);
	for(i=0;i<n;i++)scanf("%lld",&A[i]);
	for(i=0;i<n;i++)
	{
		a=A[i];
		B[i]=abs(a,m);
	}
	for(i=0;i<n-1;i++)
	{
		j1=0;
		for(j=0;j<n-1-i;j++)
		{
			if(B[j]>B[j+1])
			{
				atemp=A[j];
				A[j]=A[j+1];
				A[j+1]=atemp;
				btemp=B[j];
				B[j]=B[j+1];
				B[j+1]=btemp;
				j1=1;
			}
			else if(B[j]==B[j+1]&&A[j]>A[j+1])
			{
					atemp=A[j];
				    A[j]=A[j+1];
				    A[j+1]=atemp;
				    j1=1;
			}
		}
		if(j1==0)break;
	}
	for(i=0;i<n;i++)printf("%lld\n",A[i]);
	return 0;
}
long long abs(long long a,long long m)
{
	long long b;
	b=a-m;
	if(b<0)b=-b;
	return b;
}