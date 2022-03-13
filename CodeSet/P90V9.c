#include<stdio.h>
unsigned long long num(long long p,long long q);
int main()
{
 long long n,i,j;
 long long m,a[1000];
 scanf("%lld%lld",&n,&m);
 for(i=0;i<n;i++)
 {
  scanf("%lld",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  unsigned long long p,q;
  long long t;
  for(j=i+1;j<n;j++)
  {
   t=a[i];
   p=num(a[i],m);
   q=num(a[j],m);
   if(p>q)
   {
    a[i]=a[j];
    a[j]=t;
   }
   else if(p==q&&a[j]<a[i])
   {
    a[i]=a[j];
    a[j]=t;    
   }
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%lld\n",a[i]);
 }
 return 0;
 } 
 unsigned long long num(long long p,long long q)
 {
  return((p-q)*(p-q));
}