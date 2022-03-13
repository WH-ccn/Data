#include <stdio.h>
#include <stdlib.h>
long long llabs(long long x)
{
	if (x<0) x=-x;
	return x;
}

int main()
{
	long long n,m,i,k=1,pass;
	scanf("%lld %lld",&n,&m);
	long long a[n+1];
	for (i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	while(k!=0){
		k=0;
		for(i=1;i<=n-1;i++){
			if(llabs(a[i]-m)>llabs(a[i+1]-m)){
				pass=a[i+1];
				a[i+1]=a[i];
				a[i]=pass;
				k=1;
		    }
			else if(llabs(a[i]-m)==llabs(a[i+1]-m)){
		    	if (a[i]>a[i+1]) {
		    	    pass=a[i+1];
				    a[i+1]=a[i];
				    a[i]=pass;
				    k=1;	
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		printf("%lld\n",a[i]);  
	}
	return 0;
}