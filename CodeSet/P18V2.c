#include<stdio.h>
long long abss(long long);
int main(){
	long long n,m,i,j;
	long long temp,x,y,X,Y,a[1000];
	scanf("%lld",&n);
	scanf("%lld",&m);
//	printf("%d%d",n,m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
//		printf("%lld",a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
		x=a[j]-m;X=abss(x);
//		printf("X=%lld\n",X);
		y=a[j+1]-m;Y=abss(y);
//		printf("Y=%lld\n",Y);
		if(Y<X){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
//		printf("a=%lld,b=%lld",a[j],a[j+1]);
		}
		else if(Y==X){
			if(a[j+1]<a[j]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		}
	}

	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
}
long long abss(long long x){
	if(x>=0)
	return x;
	else if(x<0)
	return -x;
}