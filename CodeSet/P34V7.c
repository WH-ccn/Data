#include<stdio.h>
#include<stdlib.h>
long long a[1010];
long long woabs(long long a,long long b);
void bubbleSort(long long a[], long long n,long long b);
long long main()
{
    long long n,zhao,i=0;
    scanf("%lld%lld",&n,&zhao);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    bubbleSort(a,n,zhao);
    for(i=0;i<n;i++)
    {
        prlong longf("%lld\n",a[i]);
    }
    return 0;
}
void bubbleSort(long long a[], long long n,long long b) {
 long long i, j, flag;
 long long hold;
    for(i = 0; i < n-1; i++){
      flag = 0;
    for( j = 0; j < n-1-i; j++)
         if(woabs(a[j],b) > woabs(a[j+1],b)){
           hold = a[j];
           a[j] = a[j+1];
           a[j+1] = hold;
            flag = 1;
               }
   if (0 == flag)
   break;
   }
}
long long woabs(long long a,long long b)
{
    long long res;
    res=a-b;
    if(res<0)
    {
        res=-res;
    }
    return res;
}