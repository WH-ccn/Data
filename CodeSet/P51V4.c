#include<stdio.h>
#include<stdlib.h>
long long abss(long long i);
int n,q;
void bubblesort(int [],int);
int main(){
      
      int b[1005],c[1005];
	  scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
}


   bubblesort(b,n);
   
   for(int i=0;i<n;i++){
   printf("%d\n",b[i]);
}
   return 0;
	
} 
void bubblesort(int a[],int n){
	
	int j,k,flag;
	int hold;
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