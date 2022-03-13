#include <stdio.h>
#include <math.h>
//long long result(long long a[],long long m,long long n);
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	long long a[1005];
	long long b[1005];
	for(i=0;i<n;i++){
		scanf("%lld ",&a[i]);
	}
	for(j=0;j<n;j++){
		b[j] = labs(a[j]-m);
		//printf("%lld",b[j]);
	}
	
	int flag;
	long long  hold;
	for(i=0;i<n-1;i++){
		flag = 0;
		for(j=0;j<n-1-i;j++){
			if(b[j]>b[j+1]){
				hold = b[j];
				b[j] = b[j+1];
				b[j+1] = hold;
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
		for(i=0;i<n;i++){
		printf("%lld\n",b[i]);
	}
	
	return 0;
	
	
}