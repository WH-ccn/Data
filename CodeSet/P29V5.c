#include <stdio.h>
#include <stdlib.h>
void bubble(long long [],int,int);
int main(){
	int n,m,k,i;
		scanf("%d%d\n",&n,&m);
	long long a[n];
	k=n;
	while(k--){scanf("%lld",&a[k]);}
	bubble(a,n,m);
	for(i=0;i<n;i++){printf("%lld\n",a[i]);}	
}

void bubble(long long a[],int n,int m){
	int i,j;
	long long hold=0;
	for(i=0;i<n-1;i++){
	for(j=0;j<n-1-i;j++){
	if(llabs(a[j]-m)>llabs(a[j+1]-m)){hold=a[j];a[j]=a[j+1];a[j+1]=hold;}
	if(llabs(a[j]-m)==llabs(a[j+1]-m)&&a[j]>a[j+1]){hold=a[j];a[j]=a[j+1];a[j+1]=hold;}
	}




}
	
}