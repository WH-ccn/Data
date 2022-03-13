#include<stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
	double a[1001]={0},hold;
	while(i<n){
		scanf("%lf",&a[i]);
		i++;
	}
    int j,flag;
	for(i=0;i<n-1;i++){
	for(j=0;j<n-1-i;j++){
		if(a[j]>a[j+1]){
			hold=a[j];
			a[j]=a[j+1];
			a[j+1]=hold;
			flag=1;
		}
	}
    }
	for(i=0;i<n;i++){
		printf("%.5f\n",a[i]);
	}
	return 0;
}