#include <stdio.h>
long long abs(long long s){
 if(s<0){
  s=-s;
 }
 return s;
}
int main(){
 int n,i,j;
 long long m;
 long long temp;
 scanf("%d%lld",&n,&m);
 long long a[n-1];
for(i=0;i<n;i++){
 scanf("%lld",&a[i]);
}
for(i=0;i<n-1;i++){
  for(j=0;j<n-1-i;j++){
   if(a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
 
  }
 }
for(i=0;i<n-1;i++){
  for(j=0;j<n-1-i;j++){
   if(abs(a[j]-m)>abs(a[j+1]-m)){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
 
  }
 }
 for(i=0;i<n;i++){
  printf("%lld\n",a[i]);
 }
 
 
}