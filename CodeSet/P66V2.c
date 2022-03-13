#include<stdio.h>

long long aabs(long long a,long long m);

int main(){
	int m,n,i,j;
	long long a[1000],t;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(aabs(a[i],m)<aabs(a[j],m)){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}else if(aabs(a[i],m)==aabs(a[j],m)){
				if(a[i]<a[j]){
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
	} 
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
} 

long long aabs(long long a,long long m){
	if(a-m<0) return m-a;
	return a-m;
}