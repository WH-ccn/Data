#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int hold;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(fabs(a[j]-m)>fabs(a[j+1]-m)){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
			else if(fabs(a[j]-m)==fabs(a[j+1]-m)){
				if(a[j]>a[j+1]){
					hold=a[j];
					a[j]=a[j+1];
					a[j+1]=hold;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}