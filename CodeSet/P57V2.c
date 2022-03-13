#include <stdio.h>

long bbs(long,long);

int main()
{
	int m,n;
	int temp;
	long a[1002];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%ld",&a[i]);
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(bbs(m,a[j])>bbs(m,a[j+1])){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}else if(bbs(m,a[j])==bbs(m,a[j+1])){
				if(a[j]>a[j-1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%ld\n",a[i]);
	}
	return 0;
	
}

long bbs(long m,long x)
{
	long BBS=m-x;
	if(m-x<0) BBS=x-m;
	return BBS;
}