#include<stdio.h>
long long abs(long long);
int main(){
 long long a[1005]={0};
 long long b[1005]={0};
 int i,u,r,l,m;
 int hold;
    scanf("%d%d",&i,&m);
    for( r=0;r<i;r++){
     scanf("%lld",&a[r]);
}

 
 for(int j=0;j<i-1;j++){
  int flag=0;
  for(int k=0;k<i-j-1;k++){
   if(abs(a[k]-m)>abs(a[k+1]-m)){
    hold=a[k];
    a[k]=a[k+1];
    a[k+1]=hold; 
    flag=1;
  
   }
   if(abs(a[k]-m)==abs(a[k+1]-m)&&a[k]<a[k+1]){
    hold=a[k];
    a[k]=a[k+1];
    a[k+1]=hold; 
    flag=1;
   }
   if(abs(a[k]-m)==abs(a[k+1]-m)&&a[k]>a[k+1]){
    hold=a[k+1];
    a[k+1]=a[k];
    a[k]=hold; 
    flag=1;
   }
   
  }
  if(flag==0) break;
 }
 for( u=0;u<i;u++){
  printf("%lld\n",a[u]);
 }
} 
long long abs(long long a)
{ if (a>=0) return a;
  if (a<0) return -a;
  
}