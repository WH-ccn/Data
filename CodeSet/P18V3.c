#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
long long labs(long long n){
	if(n<0) return -n;
	return n; 
}
void supperbubble(long long a[],long long n,long long key){
	long long i,j,hold,flag;
	for(i=0;i<n-1;i++){
		flag=0;
		for(j=0;j<n-1-j;j++)
		if(labs(a[j]-key)>labs(a[j+1]-key)){
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
			flag=1;
		}
		if(0==flag)
		break;
	}
}
int main(){
	int i;
	long long m,n;
	long long a[1005];
	scanf("%ld%ld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
	}
	supperbubble(a,n,m);
	for(i=0;i<n;i++){
		printf("%ld\n",a[i]);
	}
	return 0;
}