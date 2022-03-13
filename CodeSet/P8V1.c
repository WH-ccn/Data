#include<stdio.h>

long long abs(int x,int y)
{
	long long aaa,X=x,Y=y;
	aaa=X-Y;
	if(aaa<0LL)
		return -aaa;
	return aaa;
}

void bubbleSort(int a[], int n, int m)
{
	int i, j, hold, flag;
	for(i = 0; i < n-1; i++)
	{
		flag = 0;
		for(j = 0; j < n-1-i; j++)
	if(abs(a[j],m) > abs(a[j+1],m))
	{
		hold = a[j];
		a[j] = a[j+1];
		a[j+1] = hold;
		flag = 1; 
	}
	if(0 == flag)
	break; 
	} 
}

int main()
{
	int n,m,a[1000];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubbleSort(a,n,m);
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}