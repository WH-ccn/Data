#include<stdio.h>
#include<math.h>

int main(){
	int i,t,m,n,v;
	long long k;
	long long a[1001],b[1001];
	
	scanf("%d %d",&n,&v);
	for(i=0;i<n;i++){
		scanf("%lld",&b[i]);
	}
	for(t=0;t<n;t++)
	{
		a[t]=b[t]-v;
		if (a[t]<0) a[t]*=-1;
	}
	for(t=0;t<n;t++){
		if(v==b[t]){
				k=b[0];
				b[0]=b[t];
				b[t]=k;
				k=a[0];
				a[0]=a[t];
				a[t]=k;
			}
			for(m=t+1;m<n;m++){
			
			if (a[m]<a[t]){
				k=b[m];
				b[m]=b[t];
				b[t]=k;
				k=a[m];
				a[m]=a[t];
				a[t]=k;
			}
		}
	}

	for(t=0;t<n;t++)
	{
		printf("%lld\n",b[t]);
	}
	return 0; 
}