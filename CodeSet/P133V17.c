#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int fun(int a,int b,int m){
	int p=abs(a-m);
	int q=abs(b-m);
	if(p>q) return 1;
	else return 0;
}

int main ()
{
	int n=0,m=0;
	scanf("%d%d",&n,&m);
	int i=0;
	int x=0;
	int temp=0;
	int a[1010]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	
	int j=0,k=0;
	for(j=0;j<n;j++){
		for(k=0;k<n-j-1;k++){
			x=fun(a[k],a[k+1],m);
			if(x){
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		} 
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}


	return 0;
}