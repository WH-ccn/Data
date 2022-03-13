#include<stdio.h>
#include<stdlib.h> 
#define N 1000
int abs(int);
int main()
{
 int n,m,c;
 scanf("%d %d",&n,&m);
 int i,a[N],b[N];
 for(i=0;i<N;i++){
  scanf("%d",&a[i]);
  c=a[i]-m;
  b[i]=abs(c);
 }
 bubble(b,N);
 for(i=0;i<N;i++){
  printf("%d\n",a[i]);
 }
 return 0;
 }
 
void bubble(int b[],int n)
{
 int i,j,hold,flag;
 for(i=0;i<n-1;i++){
  flag=0;
  for(j=0;j<n-1-i;j++){
   if(b[j]<b[j+1]){
    hold=a[j];
    a[j]=a[j+1];
    a[j+1]=hold;
    hold=b[j];
    b[j]=b[j+1];
    b[j+1]=hold;
    flag=1;
   } 
  }
        if(flag==0){
         break;
  }
 }
 }