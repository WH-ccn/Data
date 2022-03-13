#include<stdio.h>
#include<stdlib.h>
void bubbleSort(long long a[],long long b[],int n);
int main()
{
	int i,n;
	long long b[1005],m,a[1005];
	scanf("%d%d",&n,&m);
	for(i = 0; i < n ; i++){
	scanf("%d",&a[i]);
	b[i]=a[i]-m;
	if(b[i]<0)
	b[i]=-b[i];
    }
	bubbleSort(a,b,n);
	for(i = 0; i < n ; i++)
	printf("%d\n",a[i]);
	return 0;
}
void bubbleSort(long long a[],long long b[],int n)
{
    int i, j;
    long long hold,h;
    for(i = 0; i < n - 1; i++)
	{
    for(j = 0; j < n-1-i; j++)
	{
    if(b[j] > b[j + 1])
    {
    hold = a[j];
    a[j] = a[j + 1];
    a[j + 1] = hold;
    h = b[j];
    b[j] = b[j + 1];
    b[j + 1] = h;
    }
	if(b[j] == b[j + 1])
    {
    	if(a[j]>a[j+1]){
    hold = a[j];
    a[j] = a[j + 1];
    a[j + 1] = hold;
    h = b[j];
    b[j] = b[j + 1];
    b[j + 1] = h;
	}
    }  
	}
}
}