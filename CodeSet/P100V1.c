#include<stdio.h>
#include<stdlib.h>
int main(){
	int abs(int x);
	int n,m,i,j,k,s,temp1,temp2;
	int a[1005]={0},b[105]={0};
	scanf("%d %d",&n,&m);
	for(k=1;k<=n;k++){
		scanf("%d",&a[k]);
		b[k]=abs(a[k]-m);
	}
	for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            if(b[j] > b[j+1]){
                temp1=b[j];
                b[j]=b[j+1];
                b[j+1]=temp1;
                temp2=a[j];
                a[j]=a[j+1];
                a[j+1]=temp2;
            }
        }
    }
    for(s=1;s<=n;s++){
		printf("%d\n",a[s]);
	}
}
int abs(int x){
	if(x>=0){
		return x;
	}
	if(x<0){
		return -x;
	}
}