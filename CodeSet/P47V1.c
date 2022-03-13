#include <stdio.h>
long long abs(long long);
long long a[1005],b[1005];
int main()
{
 long long i,j,n,m,y,flag=0;
 scanf("%lld%lld",&n,&m);
 for(i=0;i<n;i++)
 {
  scanf("%lld",&a[i]);
  b[i]=a[i]-m;
 }
 for(j=0;j<n-1;j++)
 {
  for(i=0;i<n-1-j;i++)
  {
   if(abs(b[i])>abs(b[i+1]))
   {
    y=b[i];
    b[i]=b[i+1];
    b[i+1]=y;
    flag=1;
   }
   if(abs(b[i])==abs(b[i+1]) && b[i]>b[i+1])
   {
    y=b[i];
    b[i]=b[i+1];
    b[i+1]=y;
    flag=1;
   }
  }
  if(flag==0)
   break;
 }
 for(i=0;i<n;i++)
 {
  printf("%lld\n",b[i]+m);
 }
 return 0;
}
long long abs(long long x)
{
 if(x<0)
  return -x;
 else
  return x;
}