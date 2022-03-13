#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int a[],int b[],int n);
int abs(int x);
int main()
{
	int i,m,n,a[1005],b[1005];
	scanf("%d%d",&n,&m);
	for(i = 0; i < n ; i++){
	scanf("%d",&a[i]);
	b[i]=a[i]-m;
	b[i]=abs(b[i]);
    }
	bubbleSort(a,b,n);
	for(i = 0; i < n ; i++)
	printf("%d\n",a[i]);
	return 0;
}
void bubbleSort(int a[],int b[],int n)
{
    int i, j;
    int hold;
    for(i = 0; i < n - 1; i++)
	{
    for(j = 0; j < n-1-i; j++)
	{
    if(b[j] > b[j + 1])
    {
    hold = a[j];
    a[j] = a[j + 1];
    a[j + 1] = hold;
    } 
	}
}
}