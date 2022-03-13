#include <stdio.h>
long long oaw(long long);
int main(){
	int m,i,j,temp;
	long long a[1001];
	long long x,y,n;
	scanf("%d%lld",&m,&n);
	for(i=0;i<m;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<m-1;i++){
		for(j=0;j<m-1;j++){
			x=oaw(a[j]-n);
			y=oaw(a[j+1]-n);
			if(x>y){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		    if(x==y){
				if(a[j]>a[j+1]){
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			} 
		}
	}
	for(i=0;i<m;i++){
		printf("%lld\n",a[i]);
	}
}
long long oaw(long long b){
	return b>0?b:-b;
}