#include <stdio.h>
int main(){
	int n,m,i,j;
	long long tp,tmp;
	scanf("%d %d",&n,&m);
	long long a[n], b[n];
	for (i = 0; i < n; i++){
		scanf("%lld",&tmp);
		a[i] = tmp;
	}
	for (i = 0; i < n; i++){
		if (a[i] >= m){
			b[i] = a[i] - m;
		}else {
			b[i] = m - a[i];
		}
	}
	for (i = 0; i < n -1; i++){
		for (j = 0; j < n - 1 - i; j++){
			if (b[j] > b[j+1]){
				tp = b[j];
				b[j] = b[j + 1];
				b[j+1] = tp;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j+1] = tmp;
			}else if (b[j] == b[j+1]){
				if (a[j] > a[j+1]){
					tmp = a[j];
					a[j] = a[j + 1];
					a[j+1] = tmp;
				}
			}
		}
	}
	for (i = 0; i < n; i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}