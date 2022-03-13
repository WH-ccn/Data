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
	int i,j,k=1,p=1;
	long long q[1001]={0},t;
	scanf("%d%d",&n,&m);
	
	while(n--)
	{
		scanf("%d",&q[k]);
		k++;
	}
	
	for(i=1;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(jdz(q[j],m)<jdz(q[i],m))
			{
		        t=q[j];
		        q[j]=q[i];
		        q[i]=t;
		    }
		    else if(jdz(q[j],m)==jdz(q[i],m))
		    {
		    	if(q[j]<q[i])
		    	{
		        t=q[j];
		        q[j]=q[i];
		        q[i]=t;
		        }
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