#include <stdio.h>

long long f(long long a, long long b);

long long a[1005];

int main(){
	long long n = 0, m = 0;
	scanf("%lld %lld", &n, &m);
	
	int i = 0, j = 0;
	for(i=0;i<=n-1;i++){
		scanf("%lld", &a[i]);
	}
	
	long long c = 0;
	for(i=0;i<=n-2;i++){
		for(j=0;j<=n-2-i;j++){
			if(f(a[j], m) > f(a[j+1], m)){
				c = a[j];
				a[j] = a[j+1];
				a[j+1] = c;
			}else if(f(a[j], m) == f(a[j+1], m)){
				if(a[j] > a[j-1]){
					c = a[j];
					a[j] = a[j+1];
					a[j+1] = c;
				}
			}
		}
	}
	
	for(i=0;i<=n-1;i++){
		printf("%lld\n", a[i]);
	}
	
	return 0;
}

long long f(long long a, long long b){
	if(a-b<0){
		return (b-a);
	}else{
		return (a-b);
	}
}