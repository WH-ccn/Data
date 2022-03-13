#include<stdio.h>

long long judge(long long a,long long m);

int main(){
	long long m,n,i,j;
	long long a[1000],t;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(judge(a[j],m)>judge(a[i],m)){
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}else if(judge(a[j],m)==judge(a[i],m)){
				if(a[j]>a[i]){
					t=a[j];
					a[j]=a[i];
					a[i]=t;
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