#include <stdio.h>

int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	long long a[n];
	long long b[n];
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if(a[i]>=m) b[i]=a[i]-m;
		else b[i]=m-a[i];
	}
	for(j=1;j<=n-1;j++){
		for(i=0;i<n-1;i++){
			if(b[i]>b[i+1]){
				long long t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				long long k=b[i];
				b[i]=b[i+1];
				b[i+1]=k;
			}
		}
	}
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]&&b[i]==b[i+1]){
			long long t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}