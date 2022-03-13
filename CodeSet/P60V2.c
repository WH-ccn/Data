#include <stdio.h> 
void bubble(long long a[],long long b[],long long n);
long long a[1000],b[1000];
int main()
{
 long long n,m,i,q;
 scanf("%lld%lld",&n,&m);
 for(i=0;i<n;i++)
 {
  scanf("%lld",&a[i]);
  b[i]=a[i]-m;
  if(b[i]<0)
  b[i]=-b[i];
 }
 bubble(a,b,n);
 for(i=0;i<n;i++)
 {
  if(b[i]==b[i+1])
  {
   long long k;
   if(a[i]>a[i+1])
   {
    k=a[i];
    a[i]=a[i+1];
    a[i+1]=k;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%lld\n",a[i]);
 }
 return 0;
 
}



void bubble(long long a[],long long b[],long long n)
{
 int i,j;
 long long hold1,hold2;
 for(i=0;i<n-1;i++)
     for(j=0;j<n-1-i;j++)
         if(b[j]>=b[j+1])
         {
          hold1=b[j];
          b[j]=b[j+1];
          b[j+1]=hold1;
          hold2=a[j];
          a[j]=a[j+1];
          a[j+1]=hold2;
   }
}