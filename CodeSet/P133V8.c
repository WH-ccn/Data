#include <stdio.h>

long long juli (long long a,long long m);
int main ()
{
	long long n,m;
	scanf ("%lld%lld",&n,&m);
	long long a[n]; 
	
	int i;
	for (i=0;i<n;i++) {
		scanf("%lld",&a[i]);
	}
	long long b;
	int j,k;
	for (j=0;j<n-1;j++) {
		for (k=0;k<n-1-j;k++) {
			if ( juli(a[k],m) > juli(a[k+1],m) ){
			
				b=a[k];
				a[k]=a[k+1];
				a[k+1]=b;
			}
			
			else if ( juli(a[k],m)== juli(a[k+1],m) ){
				if (a[k]>a[k+1] ) {
					long long c;
					c=a[k];
					a[k]=a[k+1];
					a[k+1]=c;
				}
			}
		}
	}
	
	int l;
	for (l=0;l<n;l++) {
		printf("%lld\n",a[l]);
	}
	
	return 0;
}

	long long juli (long long a,long long m) {
		long long x;
		if (a>0 && m>0) 
		{
			if (a>m) x=a-m;
			else x=m-a;
		}
		if (a>0 && m<0) x=a-m;
		if (a<0 && m>0) x=m-a;
		if (a<0 && m<0) {
			if (a>m) x=a-m;
			else x=m-a;
		}
		return x;
	}