#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
long long labs(long long);
int main(){
	int i,j;
	long long a[1005];
	long long n,m,x,y,temp;
	scanf("%lld %lld",&n,&m);
//	printf("%lld %lld",n,m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
/*	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}*/
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			x=labs(a[j]-m);y=labs(a[j+1]-m);
			if(x>y){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else if(x==y){
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
}
long long labs(long long n){
	if(n<0)
	return -n;
	else 
	return n;
}