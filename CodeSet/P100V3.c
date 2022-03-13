#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n,m,i,j,k,s,temp1,temp2;
	long long int a[1005]={0},b[105]={0};
	scanf("%lld %lld",&n,&m);
	for(k=1;k<=n;k++){
		scanf("%lld",&a[k]);
		b[k]=llabs(a[k]-m);
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
            if(b[j]=b[j+1] && a[j]>a[j+1]){
            	temp2=a[j];
                a[j]=a[j+1];
                a[j+1]=temp2;
			}
        }
    }
    for(s=1;s<=n;s++){
		printf("%lld\n",a[s]);
	}
}