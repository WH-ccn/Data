#include<stdio.h>
int main()
{
 int n, m, i, j;
 long long  a[1000];
 long long hold, r1, r2;
 scanf("%d%d", &n, &m);
 for(i=0;i<n;i++)
 scanf("%lld", &a[i]);
 for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++){
     r1=a[j]-m;
     r2=a[j+1]-m;
     if(r1<0)
     r1=-r1;
     if(r2<0)
     r2=-r2;
     
     if(r1>r2){
      hold=a[j];
      a[j]=a[j+1];
      a[j+1]=hold;
     }
  if(r1==r2&&a[j]>a[j+1]){
   hold=a[j];
   a[j]=a[j+1];
   a[j+1]=hold;
    }
    }
 for(i=0;i<n;i++)
 printf("%lld\n", a[i]);
 return 0;
}