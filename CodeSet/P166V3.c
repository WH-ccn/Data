#include<stdio.h>
#include<math.h>
int m,n,i,j,i1;
long long int a[1000],hold,b,ans[1000],k;
int main (){
	scanf("%d %d",&n,&m);
	for( i=0;i<n;i++){
		scanf("%lld",&ans[i]);
		a[i]=ans[i]-m;
		if(a[i]>=0)
		a[i]=a[i];
		else
		a[i]=-a[i]; 
	}
	if(n==1)
	printf("%lld",ans[i]);
	else{
	for( i=0;i<n;i++){
			for( j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					hold=a[j];
					b=ans[j];
					a[j]=a[j+1];
					ans[j]=ans[j+1];
					ans[j+1]=b;
					a[j+1]=hold;} }}
	for(i1=0;i1<n;i1++)
	{if(a[i1] == a[i1+1]){
		if(ans[i1] >= ans[i1+1]){
		k=ans[i1];
		ans[i1]=ans[i1+1];
		ans[i1+1]=k;}}
	printf("%lld\n",ans[i1]);}}
	return 0;
}