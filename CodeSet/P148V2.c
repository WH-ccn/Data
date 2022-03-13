#include <stdio.h>
long long dis(long long,int);
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	long long a[n];
	long long b[n];
	for(int i = 0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int j = 0;j<n;j++){
		b[j]=dis(a[j],m);
	}
	for(int k = 0;k<n-1;k++){
		for(int l = k;l<n;l++){
			if(b[k]>b[l]){
				long long tempa = a[k];
				a[k]=a[l];
				a[l]=tempa;
				long long tempb = b[k];
				b[k]=b[l];
				b[l]=tempb;
			}
		}
	}
	for(int k1 = 0;k1<n-1;k1++){
		for(int l1 = k1;l1<n;l1++){
			if(b[k1]==b[l1] && a[k1]>a[l1]){
				long long temp1 = a[k1];
				a[k1]=a[l1];
				a[l1]=temp1;
			}
		}
	}
	for (int shit = 0; shit <n;shit++){
		printf("%lld\n",a[shit]);
	}
} 
long long dis(long long a,int b){
	if(a>b){
		return(a-b);
	}
	else{
		return(b-a);
	}
} 