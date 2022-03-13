#include<stdio.h>
#include<math.h>
int main(){
	int n,i,m,tmp,ch=1;
	int a[1005];
	scanf("%d%d",&n,&m);
	for (i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	while (ch){
		ch=0;
		for (i=1;i<n;++i){
			if (abs(a[i]-m)<abs(a[i-1]-m)){
				tmp=a[i];
				a[i]=a[i-1];
				a[i-1]=tmp;
				ch=1;
			}
		}
	}
	for (i=0;i<n;++i){
		printf("%d\n",a[i]);
	}
	return 0;
}