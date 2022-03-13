#include <stdio.h>
#include <stdlib.h>
long long abss(long long a)
{
	if(a<0)return -a;
	return a;
}
int n,k; 
int num[1005];
int rise(const void*p1,const void*p2){
	int x=*((int*)p1);
	int y=*((int*)p2);
	if(abss(x-k)>abss(y-k)) return 1;
	if(abss(x-k)<abss(y-k)) return -1;
	if(x>y) return 1;
	if(x<y) return -1; 
	return 0;
}
int main(){
	scanf("%d%d",&n,&k);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	qsort(num,n,sizeof(num[0]),rise);
	for(i=0;i<n;i++){
		printf("%d\n",num[i]);
	}

	return 0;
}