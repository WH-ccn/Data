#include<stdio.h>
#include<stdlib.h>
int abs(int x);
int main()
{
	int m,n,i=0,j,k;
	int a[1000]={0},b[1000]={0};
	scanf("%d %d",&n,&m);
	while(i<n){
		scanf("%d",a[i]);
		k=m-a[i];
		b[i]=abs(k);
		i++;
	}
	int hold,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(b[j]>b[j+1]){
				hold=b[j];
				temp=a[j];
				b[j]=b[j+1];
				a[j]=a[j+1];
				b[j+1]=b[j];
				a[j+1]=a[j];
			}
			if(b[j]=b[j+1]){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}