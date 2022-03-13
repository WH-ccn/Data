#include<stdio.h>
long long jdz(long long,long long);
int main()
{
  long long i,j,n,m,a[1001],temp;
  scanf("%lld %lld",&n,&m);
  for(i=0;i<=n-1;i++)
    {
   scanf("%lld",&a[i]);
 }
  for(i=0;i<=n-2;i++)
    {
   for(j=0;j<=n-2-i;j++)
     {
    if(jdz(a[j],m)>jdz(a[j+1],m))
      {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
   }
    else if(jdz(a[j],m)==jdz(a[j+1],m)) 
      {
     if(a[j]>a[j+1])
       {
      temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
  }
 }
  for(i=0;i<=n-1;i++)
  printf("%lld\n",a[i]);
  return 0; 
}
long long jdz(long long k,long long q)
{
 return k-q>0?k-q:q-k;
}