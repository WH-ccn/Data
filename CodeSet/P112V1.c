#include<stdio.h>
#include<stdlib.h>
long long a[1002];
long long absl(long long q,long long w){
	if(q>w){
		return q-w;
	}else if(q<w){
		return w-q;
	}else{
		return 0;
	}
}
void bubbleSort(long long a[], int n,long long m)
{
int i, j;
long long hold;
for( i = 0; i < n-1; i++)
for(j = 0; j < n-1-i; j++)
    if(absl(a[j],m)>absl(a[j+1],m)){
    hold = a[j];
    a[j] = a[j+1];
    a[j+1] = hold;
}else if(absl(a[j],m)==absl(a[j+1],m)){
	if(a[j]>a[j+1]){
		hold = a[j];
    a[j] = a[j+1];
    a[j+1] = hold;
	}
}
}

int main()
{
	
	long long n,m,i=0,k;
	scanf("%d%d",&n,&m);
	k=n;
	while(n--){
		scanf("%lld",&a[i]);
		i++;
	}
	bubbleSort(a, k,m);
	for(i=0;i<k;i++){
		printf("%lld\n",a[i]);
	}
    return 0;
}