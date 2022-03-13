#include<stdio.h>
#include<math.h> 
#include<stdlib.h>
#include<ctype.h>
typedef long long ll;
int m,n;
ll a[1200];
int i;
ll lls(ll a){
	if(a>0)return a;
	else return -a;
}
int cmp(void *a,void *b){
	ll a1=*(ll *)a;
	ll b1=*(ll *)b;
	
	if(lls(a1-m)>lls(b1-m)){
		return 1;
	}else if(lls(a1-m)<lls(b1-m)){
		return -1;
	}else {
		if(a1>b1){
			return 1;
		}else return -1;
	}
}
int main()
{
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	qsort(a,n,sizeof(ll),cmp);
	for(i=0;i<n;i++){
		printf("%ld\n",a[i]);
	}
	return 0;
}