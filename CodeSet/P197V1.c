#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int m,n;
	int data[10000];
    int a[10000];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&data[i]);
	}
	for(int j=0;j<m;j++)
	{
		for(int k=0;k<m-1;k++)
		{
			if(abs(data[k]-n)>abs(data[k+1]-n))
			{
				int temp=data[k];
				data[k]=data[k+1];
				data[k+1]=temp;
			}
		}
	}
	for(int q=0;q<m;q++)
	{
		printf("%d\n",data[q]);
	}
	return 0;
}