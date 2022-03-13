#include <stdio.h>
long long int index[2000]={0};
long long int c[1005]={0};
void abs (long long int x ,long long int y, long long int i){
	if(x-y>0){
		c[i] = x-y;
	}
	else{
		c[i] = y-x;
	}
	return;
}
int main(){
	long long int i=0, m, n, a=0;
	scanf("%lld %lld", &n, &m);
	for(i=0;i<n;i++){
		scanf("%lld", &index[i]);
	}
	for(a=0;a<n;a++){
		abs(index[a], m, a);
	}
	for(i=0;i<n-1;i++){
		for(long long int j=0;j<n-1-i;j++){
			if(c[j]>c[j+1]){
				long long int temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
				long long int temp1=index[j];
				index[j]=index[j+1];
				index[j+1]=temp1;
			}
			if(c[j]==c[j+1]){
				if(index[j]>index[j+1]){
					long long int temp=index[j];
					index[j]=index[j+1];
					index[j+1]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n", index[i]);
	}
	return 0;
}