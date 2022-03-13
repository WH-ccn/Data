#include <stdio.h>
long long oaw(long long);
int main(){
	int m,n,i,j,temp;
	int a[1001];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m-1;i++){
		for(j=0;j<m-1;j++){
			if((oaw(a[j]-n))>(oaw(a[j+1]-n))){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		    if((oaw(a[j]-n))==(oaw(a[j+1]-n))){
				if(a[j]>a[j+1]){
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			} 
		}
	}
	for(i=0;i<m;i++){
		printf("%d\n",a[i]);
	}
}
long long oaw(long long b){
	return b>0?b:-b;
}