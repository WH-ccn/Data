#include <stdio.h>
#include <stdlib.h> 

int main(){
	int a[1002],n,m,i,j,t,min;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(abs(a[j]-m)<abs(a[min]-m))
			    min=j;
			else if(abs(a[j]-m)==abs(a[min]-m)&&a[j]<a[min])
			    min=j;    
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++)
	    printf("%d\n",a[i]);	
	return 0;
}