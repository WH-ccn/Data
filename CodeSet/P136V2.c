#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,i,j;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n],temp;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(abs(a[j]-m)>abs(a[j+1]-m)){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			if(abs(a[j]-m)==abs(a[j+1]-m)){
				if(a[j]>a[j+1]){
                temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;					
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}