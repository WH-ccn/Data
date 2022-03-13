#include <stdio.h>
#include <stdlib.h>
long long aabs(long long);
int main()
{
   int n,m,i,j,hold,b,a[1005],temp;
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++){
    scanf("%d",&b);
    a[i]=b;
   }
    for(i=0;i<n-1;i++){
      for(j=0;j<n-1-i;j++){
           if(aabs(a[j]-m)>aabs(a[j+1]-m)){
            hold=a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
           }
           else if(aabs(a[j]-m)==aabs(a[j+1]-m)){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
           }
        }
       }
   for(i=0;i<n;i++){
    printf("%d\n",a[i]);
   }
    return 0;
}
long long aabs(long long x){
    if(x<0)
        return -x;
    else
        return x;
}