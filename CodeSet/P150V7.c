#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
long long abss(long long a){
	if(a<0){
		return -a;
	}else
	return a;
}
long long a[2000];
int main ()
{
	int n;
	long long m;
	scanf("%d %lld",&n,&m);
	int i,t;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	long long c;
	for(i=0;i<n;i++){
		for(t=1;t<n;t++){
			if(abss(a[t-1]-m)>(abss(a[t]-m))||(abss(a[t-1]-m)==(abss(a[t]-m)))&&a[t-1]>a[t]){
				c=a[t-1];
				a[t-1]=a[t];
				a[t]=c;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}