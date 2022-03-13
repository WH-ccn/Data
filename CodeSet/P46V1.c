#include<stdio.h>
#include<stdlib.h>
void bubble(int [], int,int);
int main()
{
	int n,m,i;
	int a[1001];
	scanf("%d %d",&n,&m);
	for(i=0; i<n; i++) 
	scanf("%d",&a[i]);
	bubble(a,n,m);
	for(i=0; i<n; i++) 
	printf("%d\n", a[i]);
	
	
	return 0;
}
void bubble(int a[], int n,int m)
{
	int i, j,hold,x,y;
	for(i=0; i<n-1; i++)
	for(j=0; j<n-1-i; j++)
	{
		x=abs(a[j]-m);
		y=abs(a[j+1]-m);
		if(x>y)
	{
		hold = a[j];
		a[j] = a[j+1];
		a[j+1] = hold;
	}
	else if(x==y)
	{
		if(a[j]>a[j+1])
		{
			hold = a[j];
			a[j] = a[j+1];
			a[j+1] = hold;
		}
	}
	}
}