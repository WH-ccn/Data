#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void bubble(int [],int,int);
int a[1000];
int main(){
	int n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubble(a,n,m);
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
void bubble(int b[],int n,int m) {
	int i,j,hold,x,y;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			x=fabs(b[j]-m),y=fabs(b[j+1]-m);
			if(x>y) {
				hold=b[j];
				b[j]=b[j+1];
				b[j+1]=hold;
			}
		}

	}
}