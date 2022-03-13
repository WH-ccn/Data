#include<stdio.h>
long long labs(long long x);
int main(){
 int n,i,j;
 long long a[1000],m,h;
 scanf("%d",&n);
 scanf("%lld",&m);
 
 for(i=0;i<n;i++){
  scanf("%lld",&a[i]);
 }
 for(i=0;i<n-1;i++){
  for(j=0;j<n-1-i;j++){
   if(labs(a[j]-m)>labs(a[j+1]-m)){
    h=a[j];
    a[j]=a[j+1];
    a[j+1]=h;
   }else if(labs(a[j]-m)==labs(a[j+1]-m)){
    if(a[j]>a[j+1]){
        h=a[j];
        a[j]=a[j+1];
        a[j+1]=h;
   }
   }
  }
 }
 for(i=0;i<n;i++)
{
  printf("%lld\n",a[i]);
 }
 return 0;
}
long long labs(long long x){
 if(x<0){
  x=(-1)*x;
 } 
 return x;
}