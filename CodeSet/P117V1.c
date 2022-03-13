#include <stdio.h>
#include <stdlib.h>
int main(){
	int m,n,i,temp,j;
	scanf("%d %d",&n,&m);
	int a[1002]={0};
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-1-i;j++){
			if(abs(a[j]-m)>abs(a[j+1]-m)){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}else if(abs(a[j]-m)==abs(a[j+1]-m)){
				if(a[j]>a[j+1]){
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	for(i=0;i<=n-1;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}