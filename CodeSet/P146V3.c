#include<stdio.h>
long long a[1005];
long long abs(long long x){
	if(x<0)
		return(-x);
	return x;
}
int main(){
	int n,m,i,k;
	long long temp;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(k=0;k<n;k++){
	for(i=0;i<n-1;i++){
		if((abs(a[i]-m)>abs(a[i+1]-m))||(abs(a[i]-m)==abs(a[i+1]-m)&&a[i]>a[i+1])){
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
		}
	}		
	}

	for(i=0;i<n;i++)
		printf("%lld\n",a[i]);
	return 0;
}