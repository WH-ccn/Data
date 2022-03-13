#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
long long labs(long long n){
	if(n<0) return -n;
	else return n; 
}
void supperbubble(long long a[],long long n,long long key){
	long long i,j,hold,x,y;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-j;j++){
		if(labs(a[j]-key)>labs(a[j+1]-key)){
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
		}
		else if(labs(a[j]-key)==labs(a[j+1]-key)){
			if(a[j]>a[j+1]){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}
		}
	}
}
int main(){
	long long m,n,i;
	long long a[1005];
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	supperbubble(a,n,m);
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
}