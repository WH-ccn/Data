#include<stdio.h>
#include<stdlib.h>
void bubbleSort(long long a[],long long b[] , int n);
int main()
{
long long a[1001]={0},b[1001]={0};
int n,m,r,i;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
    scanf("%d",&r);
    a[i]=r;
    if((r-m)>=0)
        b[i]=r-m;
    if((r-m<0))
        b[i]=m-r;
}
bubbleSort(a,b,n);
for(i=0;i<n;i++)
{
   printf("%d\n",a[i]);
}
return 0;
}
void bubbleSort(long long a[],long long b[] , int n )
{
   int i, j, flag,hold;
   for(i = 0; i < n; i++)
    {
      flag = 0;
      for( j = 0; j < n-1-i; j++)
      {
          if(b[j] > b[j+1])
       {
         hold = b[j];
         b[j] = b[j+1];
         b[j+1] = hold;
         hold = a[j];
         a[j] = a[j+1];
         a[j+1] = hold;
         flag = 1;
       }
         if(b[j] > b[j+1])
       {
         if(a[j] > a[j+1])
         {
             hold = b[j];
             b[j] = b[j+1];
             b[j+1] = hold;
             hold = a[j];
             a[j] = a[j+1];
             a[j+1] = hold;
             flag = 1;
          }
      }
      if (0 == flag)
      break;
     }
    }
}