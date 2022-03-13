#include<stdio.h>
long long a[1005];
int labs(long long x){
	if(x<0)
		return(-x);
	return x;
}
int main(){
	int n,m,i,k;
	long long x;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(k=0;k<n;k++){
	for(i=0;i<n-1;i++){
		if((labs(a[i]-m)>labs(a[i+1]-m))||(labs(a[i]-m)==labs(a[i+1]-m)&&a[i]>a[i+1])){
			x=a[i+1];
			a[i+1]=a[i];
			a[i]=x;
		}
	}		
	}

	for(i=0;i<n;i++)
		printf("%lld\n",a[i]);
	return 0;
}