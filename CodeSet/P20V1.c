#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long long jueduizhi(int a,int b)
{
 long long c;
 c=a-b;
 if(c<0)
 {
  c=-c;
 }
 return c;
}
int main()
{
 int i,j,m,n,a[1005];
 long long b[1005],temp;
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  b[i]=jueduizhi(a[i],m);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(b[j]>b[j+1])
   {
    temp=b[j+1];
    b[j+1]=b[j];
    b[j]=temp;
    temp=a[j+1];
    a[j+1]=a[j];
    a[j]=temp;
    
   }
  }
 }
 for(i=0;i<n-1;i++)
 {
  if(b[i]<b[i+1])
  {
   printf("%d\n",a[i]);
  }
  else if(b[i]==b[i+1])
  {
   if(a[i]<=a[i+1])
   {
    printf("%d\n",a[i]);
   }
   else 
   {
    temp=a[i+1];
    a[i+1]=a[i];
    a[i]=temp;
    temp=b[i+1];
    b[i+1]=b[i];
    b[i]=temp;
    printf("%d\n",a[i]);
   }
  }
 }
 printf("%d\n",a[n-1]);
 return 0;
 
}