#include<stdio.h>
int main(){
	int n,m,i = 0,n1;
	long long a[10000],b[10000];
	scanf("%d%d",&n,&m);
	n1 = n;
	while(n--){
		scanf("%lld",&b[i]);
		if(b[i]-m>=0)
		a[i] = (b[i]-m);
		else a[i] = (m-b[i]);
		i++;
	}
	int k,j;
	long long h;
	for(k = 0;k < n1-1;k++){
		for(j = 0;j < n1-1-k;j++)
			if(a[j] > a[j+1]){
				h = a[j];
				a[j] = a[j+1];
				a[j+1] = h;
				h = b[j];
				b[j] = b[j+1];
				b[j+1] = h;
			}
	}
	for(k = 0;k<i;k++){
		printf("%lld\n",b[k]);
	}
	return 0;
}