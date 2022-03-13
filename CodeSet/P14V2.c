#include<stdio.h>
int n;
void p(double [],int);
int main()
{
	int i;
	double a[1100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	p(a,n);
	for(i=0;i<n;i++)
	{
	    printf("%.5f\n",a[i]); 
	} 
	
}
void p(double x[],int y)
{
	int i,j,flag;
	double hold;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(x[j]>x[j+1])
			{
				hold=x[i];
				x[i]=x[j];
				x[j]=hold;
				flag=1;
			}
			if(0==flag)
			    break;
		}
	}
}