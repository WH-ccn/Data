#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int m;
long long absn(long long a){
	if (a<0) return -a;
	else return a;
}
int cmp(const void *a,const void *b){
	if (absn(*(long long *)a-m)-absn(*(long long *)b-m)!=0) return absn(*(long long *)a-m)-absn(*(long long *)b-m);
	else return *(long long *)a-*(long long *)b;
}
int main(){
	int n,i;
	long long a[1005];
	scanf("%d%d",&n,&m);
	for (i=0;i<n;++i){
		scanf("%lld",&a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for (i=0;i<n;++i){
		printf("%lld\n",a[i]);
	}
	return 0;
}