#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void bubbleSort(int a[], int n,int m);
long long abs1(long long a);
typedef long long LL;
int main() {
	int m,n,i;
	scanf("%d%d",&n,&m);
	int a[1001]= {0};
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	bubbleSort(a,n,m);
	for(i=0; i<n; i++) {
		printf("%d\n",a[i]);
	}
	return 0;
}


void bubbleSort(int a[], int n, int m) {
	int i, j, hold;
	for( i = 0; i < n-1; i++)
		for(j = 0; j < n-1-i; j++)
			if(abs1((LL)a[j]-m) >abs1((LL)a[j+1]-m) || (abs1((LL)a[j]-m)==abs1((LL)a[j+1]-m) && a[j]>a[j+1])) {
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
			}
}
long long abs1(long long a) {
	if(a>=0)
		return a;
	else
		return -a;
}