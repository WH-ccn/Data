#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,temp,n,m,a[1001]={0};
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
   for(j=0;j<n-i-1;j++)
   { if(abs(a[j]-m)>abs(a[j+1]-m))
       { 
         temp=a[j];a[j]=a[j+1];a[j+1]=temp;
    }
  else if(abs(a[j]-m)==abs(a[j+1]-m))
  {  if(a[j]>a[j+1])
       {
    temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
  }
   }
 for(i=0;i<n;i++)
 { printf("%d\n",a[i]); 
 } 
 return 0;
 }