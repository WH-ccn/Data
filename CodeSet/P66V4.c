#include<stdio.h>

long long judge(long long a,long long m);

int main(){
	long long m,n,i,j;
	long long a[1000],t;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=n-2;j>=i;j--){
			if(judge(a[j],m)>judge(a[j+1],m)){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}else if(judge(a[j],m)==judge(a[j+1],m)){
				if(a[j]>a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
} 

long long judge(long long a,long long m){
	if(a-m<0) return m-a;
	return a-m;
}