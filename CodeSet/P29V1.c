#include <stdio.h>
#include <stdlib.h>
void bubble(int [],int,int);
int main(){
	int n,m,k,i;
		scanf("%d%d\n",&n,&m);
	int a[n];
	k=n;
	while(k--){scanf("%d",&a[k]);}
	bubble(a,n,m);
	for(i=0;i<n;i++){printf("%d\n",a[i]);}	
}

void bubble(int a[],int n,int m){
	int i,j;
	int hold;
	for(i=0;i<n-1;i++){
	for(j=0;j<n-1-i;j++){
	if(abs(a[j]-m)>abs(a[j+1]-m)){hold=a[j];a[j]=a[j+1];a[j+1]=hold;}
	if(abs(a[j]-m)==abs(a[j+1]-m)&&a[j]>a[j+1]){hold=a[j];a[j]=a[j+1];a[j+1]=hold;}
	}




}