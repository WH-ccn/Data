#include <stdio.h>
long long myabs(long long a){
	return a=a>0? a:-a;
}

void bubbleSort(long long a[],long long num[] ,long long n){
	long long i, j;
	long long hold,hold1,k1;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n-1-i; j++){
			if(a[j] > a[j + 1]){
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				hold1=num[j];
				num[j] = num[j + 1];
				num[j + 1] = hold1;
			}
			if(a[j]==a[j+1]){
				if(num[j]>num[j+1]){
					k1=num[j+1];
					num[j+1]=num[j];
					num[j]=k1;
				}
			}
		}
	}
}

int main(){
	long long k1,k2,n,m,num[1005],differ[1005],i=0;
	scanf("%lld%lld",&n,&m);
	while(i<n){
		scanf("%lld",&num[i]);
		differ[i]=myabs(num[i]-m);
		i++;
	}
	bubbleSort(differ,num,n);
	i=0;
	while(i<n){
		printf("%lld\n",num[i]);
		i++;
	}
	return 0;
}