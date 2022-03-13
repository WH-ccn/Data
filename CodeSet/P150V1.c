#include<stdio.h>
#include<math.h>
#include<string.h>
int a[2000];
int main ()
{
	int m,n;
	scanf("%d %d",&n,&m);
	int i,t;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int c;
	for(i=0;i<n;i++){
		for(t=1;t<n;t++){
			if(abs(a[t-1]-m)>(abs(a[t]-m))){
				c=a[t-1];
				a[t-1]=a[t];
				a[t]=c;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}