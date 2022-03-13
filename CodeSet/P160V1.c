#include<stdio.h>
int abs(int t)
{
if (t>0)
return t;
else
return -t;
}
int arr[1000];
int brr[1000];
int main()
{
	int n,m,x,i,j,y,z,a,b;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		arr[i]=x;
		brr[i]=abs(arr[i]-m);
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
			if(brr[j]==brr[j+1]&&arr[j]>arr[j+1])
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
	printf("%d\n",arr[i]);
}
return 0;
}