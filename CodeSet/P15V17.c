#include <stdio.h>
#include <stdlib.h>
long long n,k; 
long long num[1005];
int rise(const void*p1,const void*p2){
	long long x=*((long long*)p1);
	long long y=*((long long*)p2);
	if(llabs(x-k)>llabs(y-k)) return 1;
	if(llabs(x-k)<llabs(y-k)) return -1;
	if(x>y) return 1;
	if(x<y) return -1; 
	return 0;
}
int main(){
	scanf("%lld%lld",&n,&k);
	long long i;
	for(i=0;i<n;i++){
		scanf("%lld",&num[i]);
	}
	qsort(num,n,sizeof(num[0]),rise);
	for(i=0;i<n;i++){
		printf("%lld\n",num[i]);
	}

	return 0;
}