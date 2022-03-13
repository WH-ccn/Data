#include <stdio.h>
#include <math.h>
long long a[1001]={0};
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++)
	  for(int j=0;j<n-1-i;j++){
	  	if(fabs(a[j]-m)>fabs(a[j+1]-m))
	  	{
	  		int k=a[j];
	  		a[j]=a[j+1];
	  		a[j+1]=k;
		  }
	}
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}