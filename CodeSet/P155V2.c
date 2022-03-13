#include<stdio.h>
long long jd( long long);
long long a[3000];
long long h [3000];

void bubbleSort(long long a[], int n,long long h[]);
int main(){
	
	long long m,n;
	scanf("%lld%lld",&n,&m);
	long long k,x;
	int i;
	for(i=0;i<=n-1;i++){
		scanf("%lld",&x);
		h[i]=x;
		k=x-m;
	    k=jd(k);
		a[i]=k;
	}
		bubbleSort(a,n,h);
		
		
		
		
		
		
		
		
		
		for(i=0;i<=n-1;i++)
		{
			printf("%lld\n",h[i]);
			
		}
	
	
	return 0;
}
long long jd( long long o){
	
	if(o<0){
		o=-o;
		
	}
	
	
	return o;
	
	
}
void bubbleSort(long long a[], int n ,long long h[])
{
int i, j,  flag;
long long hold,mode;
for (i = 0; i < n-1; i++)
{
flag = 0;
for (j = 0; j < n-1-i; j++) {
if ((a[j] > a[j + 1]||(a[j] == a[j + 1])&&(h[j]>h[j+1])))
{
hold = a[j];mode=h[j];
a[j] = a[j + 1];h[j]=h[j+1];
a[j + 1] = hold;h[j+1]=mode;
flag = 1; } }
if (0 == flag)
break; } }