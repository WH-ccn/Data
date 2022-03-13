#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
#include <cstdlib>
#include <cmath>
int main(){
	int n,m,i,j,mid,k,q;
	scanf("%d%d",&n,&m);
	int a[1001]; 
	int b[1001];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		b[i]=llabs(a[i]-m);
	}//比较距离的大小，顺便把a像b一样调换位置 
	for (i=0;i<n-1;i++){
		for (j=0;j<n-1-i;j++){
			if(b[j]>b[j+1]){
				mid=b[j];
				b[j]=b[j+1];
				b[j+1]=mid;
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(i=0;i<n;i++){
		if (b[i]=b[i+1]&&a[i]>a[i+1]){
			q=a[i];
			a[i]=a[i+1];
			a[i]=q;
		}
	} 
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}