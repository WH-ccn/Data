#include<stdio.h>
#include<stdlib.h>
void b(long long a[],int n,int m);

int main()
{
 int n,m;
 scanf("%d%d",&n,&m);
 long long a[n];
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%lld",&a[i]);
 }
 b(a,n,m);
 for(i=0;i<n;i++)
  printf("%lld\n",a[i]);
 return 0;
}
void b(long long a[],int n,int m)
{
 int i,j;
 long long k,min;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(labs(a[i]-m)>labs(a[j]-m))
   {
    k=a[i];
    a[i]=a[j];
    a[j]=k;
   }
   else if(labs(a[i]-m)==labs(a[j]-m))
   {
    if(a[i]>a[j]) 
    {
     min=a[j];
     a[j]=a[i];
     a[i]=min;
    }
     
   }
  }
 }
 
}