#include<stdio.h>
#include<stdlib.h>
typedef long long lolo;
lolo abs_lolo(int num)
{
	if(num<0)num=-num;
	return num;
}
int main(void)
{
	lolo m,n;
	lolo data[10000];
	scanf("%lld%lld",&m,&n);
	for(int i=0;i<m;i++)
	{
		scanf("%lld",&data[i]);
	}
	for(int j=0;j<m;j++)
	{
		for(int k=0;k<m-1;k++)
		{
			if(abs_lolo(data[k]-n)>abs_lolo(data[k+1]-n))
			{
				lolo temp=data[k];
				data[k]=data[k+1];
				data[k+1]=temp;
			}
		}
	}
	for(int q=0;q<m;q++)
	{
		printf("%lld\n",data[q]);
	}
	return 0;
}