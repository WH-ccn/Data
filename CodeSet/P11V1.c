#include<stdio.h>
bubble(long long* b,int m,int len){
	while(1){
		int i,count=0;
		for(i=0;i<len-1;i++){
			long long x1=b[i]-m;
			long long x2=b[i+1]-m;
			if(x1<0){
				x1=-x1;
			}
			if(x2<0){
				x2=-x2;
			}
			
			if(x2<x1){
				long long temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}else if(x2==x1){
				if(b[i+1]<b[i]){
					long long tem=b[i];
					b[i]=b[i+1];
					b[i+1]=tem;
				}else{
					count++;
				}
			}else{
				count++;
			}
		}
		if(count==len-1)
		break;
	}
}

long long arr[1008];
int main(){
//	freopen("file.in.txt","r",stdin);
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	long long x;
	for (i=0;i<n;i++){
		scanf("%lld",&x);
		arr[i]=x;
	}
	bubble(arr,m,n);
	for(i=0;i<n;i++){
		printf("%lld\n",arr[i]);
	}
	
	return 0;
	}