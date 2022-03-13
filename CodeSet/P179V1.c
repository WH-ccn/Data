#include <stdio.h>

int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[n];
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=3) b[i]=a[i]-3;
		else b[i]=3-a[i];
	}
	for(j=1;j<=n-1;j++){
		int is=0;
		for(i=0;i<n-1;i++){
			if(b[i]>b[i+1]){
				int t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				int k=b[i];
				b[i]=b[i+1];
				b[i+1]=k;
				is=1;
			}
			if(is==0){
				goto out;
			}
		}
	}
	out:
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]&&b[i]==b[i+1]){
			int t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}