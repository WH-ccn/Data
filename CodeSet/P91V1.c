#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#define ull unsigned long long
int abs(int x);
int abcd(int a[],int b);

int main()
{
	int m=0,n,r,q=0,i=0;
	int b,a[1001],h[1001];
	scanf("%d %d",&n,&q);
	r=q;
    for(m=0;m<n;m++)
	{
	scanf("%lf",&b);
	a[i]=b;
	i++;
	}
	
	Uptd(a,n,r);
	
	i=0;
    for(m=0;m<n;m++){
    	printf("%d\n",a[i]);
    	i++;
	}
	
	 return 0;
}

int Uptd(int a[],int b,int l)
{
	int i,j,flag,hold;
	int h[1001];
	for(i=0;i<b;i++)
	{
		h[i]=abs(a[i]-l);
	}
	for(i=0;i<b-1;i++)
	{
		flag=0;
		for(j=0;j<b-1-i;j++)
		if(h[j]>h[j+1])
		{
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
			flag=1;
		}
		if(0==flag)
		break;
	}
}