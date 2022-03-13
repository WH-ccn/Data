#include<stdio.h>
#include<math.h>
void bubble(long long [],int,int);
long long fabs(long long);
long long a[1000];
int main(){
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	bubble(a,n,m);
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}
long long fabs(long long a){
	if(a>=0){
		return a;
	}
	else{
		return -a;
	}
}
void bubble(long long b[],int n,int m) {
	int i,j,hold,x,y;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			x=fabs(b[j]-m),y=fabs(b[j+1]-m);
			if(x>y) {
				hold=b[j];
				b[j]=b[j+1];
				b[j+1]=hold;
			}
		}

	}
}