#include <stdio.h>
#include <math.h>

int a[1005];

int main(){
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	
	int i = 0, j = 0;
	for(i=0;i<=n-1;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<=n-2;i++){
		for(j=0;j<=n-2-i;j++){
			if(f(a[j], m) > f(a[j+1], m)){
				int c = 0;
				c = a[j];
				a[j] = a[j+1];
				a[j+1] = c;
			}
		}
	}
	
	for(i=0;i<=n-1;i++){
		printf("%d\n", a[i]);
	}
	
	return 0;
}

f(int a, int b){
	if(a-b<0){
		return (b-a);
	}else{
		return (a-b);
	}
}