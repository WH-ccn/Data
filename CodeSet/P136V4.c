#include<stdio.h>
#include<stdlib.h>
long long abc (long long x){
	if(x>=0)
	return x;
	if(x<0)
	return -x;
	
}
int main(){
	int n,m,i,j;
	scanf("%d",&n);
	scanf("%d",&m);
	long long a[n],temp;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(abc(a[j]-m)>abc(a[j+1]-m)){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		}
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(abc(a[j]-m)==abc(a[j+1]-m)){
				if(a[j]>a[j+1]){
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
	return 0;
}