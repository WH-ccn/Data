#include <stdio.h>

long long llabs(long long a, long long b);
int main()
{
	int n, m, i, j;
	long long a[1000], b[1000], temp;
	
	scanf("%d%d", &n, &m);
	for(i=0; i<n; i++){
		scanf("%lld", &a[i]);
		b[i]=llabs(a[i], (long long)m);
	}
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++){
			if(b[j]>b[j+1]){
				temp =b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}else if(b[j]==b[j+1]){
				if(a[j]>a[j+1]){
					temp =a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%lld\n",a[i]);
	}
	
	return 0;
}

long long llabs(long long a, long long b)
{
	if(a<b){
		return (b-a);
	}else{
		return (a-b);
	}
}