#include <stdio.h>
int main (){

	double a[1010];
	int n;
	scanf ("%d",&n);
	
	int i;
	for (i=0;i<n;i++) {
		scanf("%lf",&a[i]);
	}
		double b;
	int j,k;
	for (j=0;j<n-1;j++) {
		for (k=0;k<n-1-j;k++) {
			if (a[k]>a[k+1]) {
			
				b=a[k];
				a[k]=a[k+1];
				a[k+1]=b;
			}
		}
	}
	
	int m;
	for (m=0;m<n;m++) {
		printf("%.5lf\n",a[m]);
	}

	return 0;
}