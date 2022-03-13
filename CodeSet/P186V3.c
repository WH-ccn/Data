#include<stdio.h>
long long abs(long long x);
long long a[1000]={0};
long long b[1000]={0};
long long k[1000]={0};
int main()
{
 int n,m;
 scanf("%d %d",&n,&m);
 int i,k;
 i=1;
 while(i<=n)
 {
  scanf("%lld",&a[i]);
  k=a[i]-m;
  b[i]=abs(k);
  i++;
 }
 long long hold,h;
 int l=1,j=1;
 for(l=1;l<=n;l++)
 {
  for(j=1;j<=n;j++)
  {
   if(b[j]>b[j+1])
   {
    hold=b[j];
    b[j]=b[l];
    b[l]=hold;
    h=a[j];
    a[j]=a[l];
    a[l]=h;
   }
   if(b[j]==b[j+1]&&a[j]>a[j+1])
   {
    h=a[j];
    a[j]=a[l];
    a[l]=h;
   }
  }
 }
 i=1;
 while(i<=n)
 {
 printf("%lld\n",a[i]);
 i++;   
 }
 return 0;
}
long long abs(long long x)
{
 if(x>0)
 return x;
 if(x<0)
 {
 long long z;
 z=-x;
 return z;
 }
 else 
 return 0; 
}