#include<stdio.h>

int main(){
	long long c,d,e,f,g,h,i,j,k,l,n,m;
	scanf("%lld%lld",&n,&m);
	long long a[1001],b[1001];
	for(i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		b[i]=a[i]-m;
		if(b[i]<=0){
			b[i]=-b[i];
		}
	}
	i=1;
	while(i<=n){
		j=i;
		while(j<=n){
			if(b[i]>b[j]){
				c=b[i];
				b[i]=b[j];
				b[j]=c;
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
			else if(b[i]==b[j]){
				if(a[i]>=a[j]){
					c=a[i];
			    	a[i]=a[j];
			    	a[j]=c;
				}
			}
			j++;
		}
		printf("%lld\n",a[i]);
		i++;
	}
	return 0;
}