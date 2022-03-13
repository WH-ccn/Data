#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int m;
int cmp(const void *a,const void *b){
	if (abs(*(int *)a-m)-abs(*(int *)b-m)!=0) return abs(*(int *)a-m)-abs(*(int *)b-m);
	else return *(int *)a-*(int *)b;
}
int main(){
	int n,i;
	int a[1005];
	scanf("%d%d",&n,&m);
	for (i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	for (i=0;i<n;++i){
		printf("%d\n",a[i]);
	}
	return 0;
}