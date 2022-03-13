#include <stdio.h> 

long long abss(long long x){
	if(x>=0)
	    return x;
	else 
	    return (-x);
}
int main(){
	long long a[1002],n,m,i,j,t,min;
	scanf("%ld %ld",&n,&m);
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(abss(a[j]-m)<abss(a[min]-m))
			    min=j;
			else if(abss(a[j]-m)==abss(a[min]-m)&&a[j]<a[min])
			    min=j; 
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++)
	    printf("%ld\n",a[i]);	
	return 0;
}