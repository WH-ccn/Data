#include<stdio.h>
#include<stdlib.h>
long long abs1(long long x);
int main(){
	int n,m,a[1000]={0},i,j,hold;
	long long b[1000]={0};
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i]-m;
		b[i]=abs(b[i]);
		
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++)
			if(b[j]>b[j+1]){
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
			}
			 if(b[j]==b[j+1]){
				if(a[j]>a[j+1]){
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
				}
			}
	}
	
	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}	
	
	return 0;
}
long long abs1(long long x){
	if (x>=0)
	return x;
	else return (-1)*x;
}