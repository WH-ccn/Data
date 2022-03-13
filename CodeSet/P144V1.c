#include<stdio.h>
	long long m=0;
	long long abss (long long a);	
	long long a[1010] = {0};
void bubbleSort (long long a[], int n);
int main (){

	int i = 0;
	int j=0;
	int n;

	scanf("%d",&n);
//	printf("%d\n",n);
	scanf("%lld",&m);
//	printf("%lld\n",m);
	while (i<n){
		scanf("%lld",&a[i]);
		i++;
	}

	bubbleSort (a,n);
	j=n-i;
	while (j<n){
		printf("%lld\n",a[j]);
		j++;
	}
	return 0;
}
void bubbleSort (long long a[], int n){
	int i, j;
	long long hold;
	for ( i = 0; i < n-1; i++){
		//flag = 0;
		for ( j=0; j<n-1-i; j++){
			if ( abss(a[j]-m) > abss(a[j+1]-m) ){
				hold   = a[j]; 
				a[j]   = a[j+1];
				a[j+1] = hold;
			//	flag = 1; 
			}
			else if ( abss(a[j]-m) == abss(a[j+1]-m) ){
				if (a[j]>a[j+1]){
				hold   = a[j]; 
				a[j]   = a[j+1];
				a[j+1] = hold;
			//	flag = 1; 
				}
			}
		}
	//	if( 0 == flag){
			//	break; 
		}	
	} 
long long abss (long long b){
	if (b<0){
		return -b;
	}
	return b;
}