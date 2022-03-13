#include<stdio.h>
#include<string.h>
#include<math.h>
#define min(a,b) (a<b)?a:b
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],i,j;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		int f=1;
		for(j=0;j<n-1-i;j++)
		{
			if(abs(a[j]-m)>abs(a[j+1]-m))
			{
				int x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
				f=0;
			}
		}
		if(f) break;
	}
	for(i=0;i<n;i++) printf("%d\n",a[i]);
}