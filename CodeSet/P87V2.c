#include<stdio.h>
long long jdz(int a,int b)
{
	if(a>b)
	return (a-b);
	else
	return (b-a);
}

int main()
{
	int n,m;
	int i,j,k=1,p=1,c=2;
	long long q[1001]={0},h[1001]={0},t;
	scanf("%d%d",&n,&m);
	while(n--)
	{
		scanf("%d",&q[k]);
		k++;
	}
	
	if(m<=0)
	{
		while(p<k)
	{
		printf("%d ",q[p]);
		p++;
	}
	}
	
	else
	{
	h[1]=q[m];
	for(i=m+1,j=m-1;i<k&&j>0;i++,j--)
	{
			if(q[i]<q[j])
			{
			    h[c]=q[i];
			    h[c+1]=q[j];
			}
			else
			{
				h[c]=q[j];
			    h[c+1]=q[i];
			}
			c+=2;
	}
	 
	if(j==0)
	{
		for(i=i;i<=k;i++)
		{
			h[c]=q[i];
			c++;
		}
	}
	if(i==k)
	{
		for(j=j;j>0;j--)
		{
			h[c]=q[j];
			c++;
		}
	}
	while(p<k)
	{
		printf("%d ",h[p]);
		p++;
	}
    }
	return 0;
}