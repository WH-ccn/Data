#include <stdio.h>
long long weizhi(long long,int);
int main(){
	int n,m;
	int a[n];
	int b[n];
	scanf("%d %d",&n,&m);
	for(int i = 0; i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j = 0;j <n;j++){
		b[j]=weizhi(a[j],m);
	}
		for(int t = 0;t<n-1;t++){
			for(int l = t;l<n;l++){
				if(b[t]>b[l]){
					int temp= a[t];
					a[t]=a[l];
					a[l]=temp;
					int ddd= b[t];
					b[t]=b[l];
					b[l]=ddd;
				}
			}
		}
		for(int tt = 0;tt<n-1;tt++){
			for(int jj = tt;jj<n;jj++){
				if(b[tt]==b[jj] && a[tt]>a[jj]){
					int dmd = a[tt];
					a[tt]=a[jj];
					a[jj]=dmd;
				}
			}
		}
	for(int mm=0;mm<n;mm++){
			printf("%d\n",a[mm]);
		}
	}
long long weizhi(long long a, int b){
	if(a>b){
		return (a-b);
	}
	else{
		return (b-a);
	}
}