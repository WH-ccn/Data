#include<stdio.h>

long long jdz(long long);
int main()
{
	int m,n,k,i=0;
	long long x;
	long long a[1001]={0};
	scanf("%d %d",&n,&m);
	k=n;
	while(k>0){
		scanf("%lld",&x);
		a[i]=x;
		i++;
		k--;
	}
	int sign=1;
	long long tmp;
	while(sign==1){
		sign=0;
		for(i=0;i<n-1;i++){
			if(jdz(a[i]-m)>jdz(a[i+1]-m)&&a[i]<a[i+1]){
				tmp=a[i];
				a[i]=a[i+1];
				a[i+1]=tmp;
				sign=1;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%lld\n",a[i]);
	}
	
	return 0;
}

long long jdz(long long x)
{
	if(x>=0){
		return x;
	}else{
		return -x;
	}
}