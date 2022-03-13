#include<stdio.h>
long long abss(long long i);
long long  n,q;
void bubblesort(long long [],long long );
int main(){
      
      long long  b[1005],c[1005];
	  scanf("%lld %lld",&n,&q);
	for(int i=0;i<n;i++){
		scanf("%lld",&b[i]);
}


   bubblesort(b,n);
   
   for(long long i=0;i<n;i++){
   printf("%lld\n",b[i]);
}
   return 0;
	
} 
void bubblesort(long long  a[],long long  n){
	
	long long j,k,flag;
	long long hold;
	for(j=0;j<n-1;j++){
		
		flag=0;
		for(k=0;k<n-1-j;k++){
			if(abss(q-a[k])>abss(q-a[k+1])){
				hold=a[k];
				a[k]=a[k+1];
				a[k+1]=hold;
				flag=1;
			}
		    else if (abss(q-a[k])==abss(q-a[k+1]))
		         {
		         	if(a[k]>a[k+1]){
		         		hold=a[k];
				        a[k]=a[k+1];
				       a[k+1]=hold;
				      flag=1;
					 }
				 }
			}
			if(0==flag)
			break;
		}
	
}
long long abss(long long i){
	if(i<0)
	return -i;
	else
	return i;
}