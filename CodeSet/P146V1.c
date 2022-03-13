#include <stdio.h>
long long abs(long long x){
	if(x>=0)
	return x;
	else 
	return -x;
}
long long m,n,a[1001],t[1001];
int i,j,flag,tem;
int main(){
	scanf("%lld%lld",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%lld",&t[i]);
		a[i]=abs(m-t[i]);
	}
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(a[j]>a[j+1]){
			tem=t[j];
			t[j]=t[j+1];
			t[j+1]=tem;
			flag=1;	
		}
			if(a[j]==a[j+1]){
			if(t[j]<t[j+1]){
			tem=t[j];
			t[j]=t[j+1];
			t[j+1]=tem;
			flag=1;	
		}
		}
		if(0==flag)
		break;
		}
	}

for(i=1;i<=n;i++){
	printf("%lld\n",t[i]);
}	
return 0;	
}