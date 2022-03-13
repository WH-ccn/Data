#include <stdio.h>
#include<stdlib.h>
long long llabs(long long a){
	if (a>=0)
	return a;
	else
	return -a;
}

void BubbleSort(int*a,int size,int m){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if (llabs((long long)a[j]-(long long)m)>llabs((long long) a[j+1]-(long long)m)){
				int buf=a[j+1];
				a[j+1]=a[j];
				a[j]=buf;
			}
		}
	}
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int *a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	BubbleSort(a,n,m);
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}