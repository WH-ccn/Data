#include<stdio.h>
long long jdz(long long a,long long b)
{
	long long c;
	if(a>b)
	c=a-b;
	else
	c=b-a;
	return c;
}

int main()
{
	int n;
	int i,j,k=1,p=1,m;
	long long q[1001]={0},t;
	scanf("%d%lld",&n,&m);
	
	while(n--)
	{
		scanf("%lld",&q[k]);
		k++;
	}
	
	for(i=1;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(jdz(q[j],m)<jdz(q[i],m)||(jdz(q[j],m)==jdz(q[i],m)&&q[j]<q[i]))
			{
		        t=q[j];
		        q[j]=q[i];
		        q[i]=t;
		    }
		    
		}
	}

	while(p<k)
	{
		printf("%d\n",q[p]);
		p++;
	}

	return 0;
}