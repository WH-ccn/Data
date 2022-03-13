#include<stdio.h>
long long a[1010]={0.0};
long long abs(long long c){
	if(c>=0) return c;
	else return(-c);
}
int main(){
	int n=0;
	int m=0;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			long long m1=abs(a[j]-m);
			long long m2=abs(a[j+1]-m);
			if(m1>m2){
				long long b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%lld\n",a[i]);
	}
}