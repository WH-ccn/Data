#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int a[100000];
long long int abs1(int x,int y);
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		for(int j=1;i+j<n;j++){
			if((abs1(a[i],m)>abs1(a[i+j],m))||(abs1(a[i],m)==abs1(a[i+j],m)&&a[i]>a[i+j])) {
				int temp=a[i];
				a[i]=a[i+j];
				a[i+j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
long long int abs1(int x,int y){
	if(x>y) {
		long long int m=x-y;
		return m;
	}
	long long int m=y-x;
	return m;
}