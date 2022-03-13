#include <stdio.h>
int main()
{
	long long n,m,i,k=1,pass;
	scanf("%lld %lld",&n,&m);
	int a[n+1];
	for (i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	while(k!=0){
		k=0;
		for(i=1;i<=n-1;i++){
			if((a[i]-m)*(a[i]-m)>(a[i+1]-m)*(a[i+1]-m)){
				pass=a[i+1];
				a[i+1]=a[i];
				a[i]=pass;
				k=1;
			}
		}
	}
	for(i=1;i<=n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}