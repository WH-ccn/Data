#include<stdio.h>
#include<stdlib.h>
void buddlesort(int [],int [],int);
int main()
{
	int a[1003],b[1003],c,d;
	int m,n,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c=a[i]-m;
		if(c<0)
		{
			c=-c;
		}
		b[i]=c;
	}
	buddlesort(a,b,n);
	for(i=0;i<n;i++)
	{
		if(b[i]==b[i+1])
		{
			if(a[i]>a[i+1])
			{
				d=a[i];
				a[i]=a[i+1];
				a[i+1]=d;
			}
		}
		printf("%d\n",a[i]);
	}
	return 0;
}
void buddlesort(int a[],int b[],int n)
{
	int i,j,hold,max;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				hold=b[j];
				b[j]=b[j+1];
				b[j+1]=hold;
				max=a[j];
				a[j]=a[j+1];
				a[j+1]=max;
		    }
	    }
    }
}