#include<stdio.h>
#include<math.h>
long long arr[1000];
long long brr[1000];
int main()
{
	int n,m,x,i,j,y,z,a,b;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		arr[i]=x;
		brr[i]=labs(arr[i]-m);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(brr[j]>brr[j+1])
			{
				y=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=y;
				a=brr[j];
				brr[j]=brr[j+1];
				brr[j+1]=a;
			}
			else if(brr[j]==brr[j+1]&&arr[j]>arr[j+1])
			{
				z=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=z;
				b=brr[j];
				brr[j]=brr[j+1];
				brr[j+1]=b;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("%lld\n",arr[i]);
}
return 0;
}