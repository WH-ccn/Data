#include <stdio.h>
long long int index[2000]={0};
long long int c[1005]={0};
void abs (int x ,int y, int i){
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
		int flag=0;
		for(int j=0;j<n-1-i;j++){
			if(c[j]>c[j+1]){
				int temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
				int temp1=index[j];
				index[j]=index[j+1];
				index[j+1]=temp1;
				flag=1;
			}
			if(c[j]=c[j+1]){
				if(index[j]>index[j+1]){
					int temp=c[j];
					c[j]=c[j+1];
					c[j+1]=temp;
				}
			}
		}
		if(0==flag) break;
	}
	for(i=0;i<n;i++){
		printf("%lld\n", index[i]);
	}
	return 0;
}