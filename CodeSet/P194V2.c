#include<stdio.h>

int main(){
 int m,n,j,i,flag,holds,hold;
 int a[1000]={0},b[1000]={0};
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  b[i]=m-a[i];
  if(b[i]<0){
   b[i]=-b[i];
  }
 } 
 for(j=0;j<n-1;j++){
  flag=0;
     for(i=0;i<n-1-j;i++){
     if(b[i]>b[i+1]){     
   holds=b[i];
      b[i]=b[i+1];2
      b[i+1]=holds;
      hold=a[i];
      a[i]=a[i+1];
      a[i+1]=hold;
      flag=1;
     }
     else if(b[i]==b[i+1]){
      if(a[i]>a[i+1]){
      hold=a[i];
      a[i]=a[i+1];
      a[i+1]=hold;
      flag=1;
         }
  }
     else{
      break;
  }
 } 
 }
 for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    }
 return 0;
}