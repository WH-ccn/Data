#include <stdio.h>

long long f(long long, long long);
void bubblesort(long long[],int);
long long a[2000] = {0};
int main()
{
	int n,m,i;
	long long b[2000] = {0};
	scanf("%d%d",&n,&m);
	for(i = 0; i < n; i++){
		scanf("%lld", &a[i]);
		b[i] = f(a[i],m);
	}
	bubblesort(b,n);
	return 0;
}

long long f(long long a,long long b){
	if(a <= b){
		return b - a;
	}else{
		return a - b;
	}
}

void bubblesort(long long b[],int n){
	int i,j;
	long long temp1,temp2;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n - 1 - i; j++){
			if(b[j] > b[j + 1]){
				temp1 = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp1;
				temp2 = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp2;
			}else if(b[j] == b[j + 1]){
				if(a[j] > a[j + 1]){
					temp1 = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp1;
					temp2 = b[j];
				    b[j] = b[j + 1];
				    b[j + 1] = temp2;
				}
			}
		}
	}
	for(i = 0;i < n;i++){
		printf("%lld\n",a[i]);
	}
	return ;
}