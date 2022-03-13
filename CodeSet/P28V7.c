#include<stdio.h>
#include<math.h>
long long absn(long long a){
	if (a<0) return -a;
	else return a;
}
int main(){
	int n,i,tmp,ch=1;
	long long a[1005],m;
	scanf("%d%lld",&n,&m);
	for (i=0;i<n;++i){
		scanf("%lld",&a[i]);
	}
	while (ch){
		ch=0;
		for (i=1;i<n;++i){
			if (abs(a[i]-m)<abs(a[i-1]-m)||(abs(a[i]-m)==abs(a[i-1]-m)&&a[i]>a[i-1])){
				tmp=a[i];
				a[i]=a[i-1];
				a[i-1]=tmp;
				ch=1;
			}
		}
	}
	for (i=0;i<n;++i){
		printf("%lld\n",a[i]);
	}
	return 0;
}