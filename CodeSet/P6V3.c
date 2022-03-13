#include <stdio.h>
#include <stdlib.h>
long long i,n,m,o;
long long a[1001],b[1001];
long long  abs1(long long x) {
	if(x>=0)
		return x;
	else {
		x=-x;
		return x;
	}
}
void  sort(long long n);
int main() {
	scanf("%lld%lld",&n,&m);
	for(i=0; i<=n-1; i++) {
		scanf("%lld",&o);
		a[i]=abs1(o-m);
		b[i]=o;
	}
	sort(n);
	for(i=0; i<=n-1; i++)
		printf("%lld\n",b[i]);
	return 0;
}
void sort(long long n) {
	long long i,j;
	long long temp;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(a[j]<a[i]||(a[j]==a[i]&&(b[j]<b[i]))) {
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
			}
		}
	}
}