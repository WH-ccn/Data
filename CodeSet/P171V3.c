#include <stdio.h>
long long abs0(long long a,long long b)
{
	if(a>=b) return a-b;
	else return b-a;
}
void bubbleSort(long long a[],long long m,long long n){
	int i,j,flag,hold;
	for(i=0;i<n-1;i++){
		flag = 0;
		for(j=0;j<n-1-i;j++){
			if(abs0(a[j],m)>abs0(a[j+1],m)){
				hold = a[j];
				a[j] = a[j+1];
				a[j+1] = hold;
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
	
}
int main(){
	long long a[1005];
	long long n,m;
	int i;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	
	}
	bubbleSort(a,m,n);
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}