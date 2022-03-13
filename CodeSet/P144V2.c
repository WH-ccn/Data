#include <stdio.h>
int n,m,d;
int y (const void *p1,const void *p2){
	long long qa,q=*(long long *)(p1);
	long long wa,w=*(long long *)(p2);
	qa= q-m>=0?q-m:m-q;
		wa= (w-m>=0?w-m:m-w);
	if (qa>wa) return 1;
	if (wa>qa) return -1;
	else if (q>w)return 1;
	else if (w<q)return -1;
	return 0;
}

int main (){
	
	long long a[1010]={0};
	scanf("%d%d",&n,&m);
	d=n;
	while (n>0){
		n--;
		scanf("%lld",&a[n]);
	} 
	
	qsort(a,d,sizeof(long long),y);
	for (n=0;n<d;n++){
		printf("%lld\n",a[n]);
	}
	return 0;
}