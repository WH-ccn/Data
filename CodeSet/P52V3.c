#include<stdio.h>
#include <stdlib.h>
#define N 1000
void bubbleSort(long long [], int , long long);
int main(){
	int m,i;
	long long k;
	long long a[N];
	scanf("%d %lld",&m,&k);
	for(i=0;i<m;i++){
	scanf("%lld",&a[i]);}
	bubbleSort( a,  m, k);
	for(i=0; i<m; i++) 
	printf("%lld\n", a[i]);
	return 0;
}
void bubbleSort(long long a[], int m, long long k)
{
	int i, j;
	long long hold, flag;
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