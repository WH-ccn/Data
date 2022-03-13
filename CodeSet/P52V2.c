#include<stdio.h>
#include <stdlib.h>
#define N 1000
void bubbleSort(int [], int , int);
int main(){
	int m,i,k;
	int a[N];
	scanf("%d %d",&m,&k);
	for(i=0;i<m;i++){
	scanf("%d",&a[i]);}
	bubbleSort( a,  m, k);
	for(i=0; i<m; i++) 
	printf("%d\n", a[i]);
	return 0;
}
void bubbleSort(int a[], int m, int k)
{
	int i, j;
	int hold, flag;
	for(i = 0; i < m-1; i++)
	{
	flag = 0;
	for(j = 0; j < m-1-i; j++)
	if(abs(a[j]-k )>=abs(a[j+1]-k))
	{
	hold = a[j];
	a[j] = a[j+1];
	a[j+1] = hold;
	flag = 1; }
	if(0 == flag)
	break; } }