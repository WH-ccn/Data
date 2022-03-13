#include<stdio.h>
#include<stdlib.h>
int bijiao(int a,int b,int m)
{ long long int s1,s2;
   s1=a-m;if(s1<0) {
   s1=-s1;}
   s2=b-m;if(s2<0) {
   s2=-s2;}
   if(s1<s2) return 1;
   if(s1==s2) return 0;
   if(s1>s2) return 2;
}
int main()
{
 int i,j,temp,n,m,a[1001]={0};
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<n-i-1;j++)
   { if(bijiao(a[j],a[j+1],m)==2)
       { 
         temp=a[j];a[j]=a[j+1];a[j+1]=temp;
    }
  else if(bijiao(a[j],a[j+1],m)==0)
  {  if(a[j]>a[j+1])
       {
    temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
  }
   }
   } 
 for(i=0;i<n;i++)
 { printf("%d\n",a[i]); 
 } 
 return 0;
 } 