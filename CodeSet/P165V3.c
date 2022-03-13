#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m,i,k=1,pass;
	scanf("%d %d",&n,&m);
	int a[n+1];
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(k!=0){
		k=0;
		for(i=1;i<=n-1;i++){
			if(abs(a[i]-m)>abs(a[i+1]-m)){
				pass=a[i+1];
				a[i+1]=a[i];
				a[i]=pass;
				k=1;
		    }
			else if(abs(a[i]-m)==abs(a[i+1]-m)){
		    	if (a[i]>a[i+1]) {
		    	pass=a[i+1];
				a[i+1]=a[i];
				a[i]=pass;
				k=1;	
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}