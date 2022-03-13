#include <stdio.h>
#include <stdlib.h>
long long aabs(long long);
int main()
{
    long long x,y;
   int n,i,j,a[1005],hold,temp,b,m;
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++){
    scanf("%d",&b);
    a[i]=b;
   }
    for(i=0;i<n-1;i++){
      for(j=0;j<n-i;j++){
            x=a[j]-m;
            y=a[j+1]-m;
           if(aabs(x)>aabs(y)){
            hold=a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
           }
           else if(aabs(x)==aabs(y)){
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