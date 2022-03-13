#include<stdio.h>
#include<stdlib.h>
int cmp(const void* p1,const void* p2){
	long long*a=(long long*)p1,*b=(long long*)p2;
	if(a[1]<b[1])return -1;
	else if(a[1]>b[1])return 1;
	else{
		if(a[0]<b[0])return -1;
		if(a[0]>b[0])return 1;
		return 0;
	}    
}
int main()
{
	int n,m,i;
	long long a[1005][2];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)scanf("%lld",&a[i][0]);
	for(i=0;i<n;i++){
		a[i][1]=a[i][0]-m;
		if(a[i][1]<0)a[i][1]=-a[i][1];
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(i=0;i<n;i++)
	printf("%lld\n",a[i][0]);
	return 0;
 } 