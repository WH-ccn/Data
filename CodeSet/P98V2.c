#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,i,t,temp,s;
	int a[1009];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		a[i]=t;
	}
	for(i=0;i<n;i++){
		
		for(s=0;s<n;s++){
			if(abs(a[i]-m)<abs(a[s]-m)){
				temp=a[i];
				a[i]=a[s];
				a[s]=temp;
				
			}else if(abs(a[i]-m)==abs(a[s]-m)){
				if(a[i]<a[s]){
				temp=a[i];
				a[i]=a[s];
				a[s]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}