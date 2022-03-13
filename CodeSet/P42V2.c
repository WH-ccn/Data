#include <stdio.h>
long long juedui (long long);
void bubblesort (long long [],long long [],int );
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	long long a[1005]={},b[1005]={};
	int i;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
//	for(i=0;i<n;i++){
//		printf("%lld %lld\n",a[i],b[i]);
//	}
	for(i=0;i<n;i++){
		a[i]=juedui(a[i]-m);
	}
//	for(i=0;i<n;i++){
//		printf("%lld %lld\n",a[i],b[i]);
//	}
	bubblesort(a,b,n);
	for(i=0;i<n;i++){
		printf("%lld\n",b[i]);
	}
	return 0;
}
long long juedui (long long c){
	if(c>=0){
		return c;
	}else{
		return -c;
	}
}
void bubblesort (long long d[],long long e[],int size){
	int j,k,flag;
	long long hold1,hold2;
//	for(j=0;j<size;j++){
//		printf("%lld %lld\n",d[j],e[j]);
//	}
	for(j=0;j<size-1;j++){
		flag=1;
		for(k=0;k<size-1-j;k++){
			if(d[k]>d[k+1]){
				hold1=d[k];
				d[k]=d[k+1];
				d[k+1]=hold1;
				hold2=e[k];
				e[k]=e[k+1];
				e[k+1]=hold2;
				flag=0; 
			}	
		}
		if(flag==1) break;
	}
	return ;
}