#include<stdio.h>
#include<math.h>
#include<ctype.h>
long long longabs(long long a, long long b){
	long long c=a-b;
	if(c>0){
		return c;
	}else{
		return -c;
	}
}
int main(){
	long long n,i,j;
	long long key,a[1020],b[1020],temp;
	scanf("%d",&n);
	scanf("%lld",&key);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		b[i]=longabs(a[i],key);
	}
	for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(b[j]>b[j+1]){
					temp=b[j+1];
					b[j+1]=b[j];
					b[j]=temp;
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			} 
		}
		for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}