#include<stdio.h>

long long abss(long long a)
{
 return (a>=0)?a:(-a);
}

int main()
{
 long long n,m,ni[1010]={0};
 scanf("%lld %lld",&n,&m);
 
 for(long long i=0;i<n;i++)
 {
  scanf("%lld",&ni[i]);
 } 
 
 long long temp;
 for(long long i=0;i<n;i++)
 {
  for(long long j=0;j<n-i-1;j++)
  {
   if(abss(ni[j]-m)>abss(ni[j+1]-m)||(abss(ni[j]-m)==abss(ni[j+1]-m)&&ni[j]>ni[j+1]))
   {
    temp = ni[j+1];
    ni[j+1] = ni[j];
    ni[j] = temp;
   }
  }
 }
 
 for (long long i=0;i<n;i++)
 {
  printf("%lld\n",ni[i]);
 }
 return 0;
}