#include<stdio.h>
#include<stdlib.h>
long long a[1500];
long long myabs(long long x){
 if(x>0) return x;
 else return -x;
}
int main() {
    long long n,m;
    scanf("%lld",&n);
    scanf("%lld",&m);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
         long long x=a[i]-m,y=a[j]-m;
            if(myabs(x)>myabs(y)){
             long long t;          
    t=a[i];
                a[i]=a[j];
                a[j]=t;

   }
   else if((myabs(x)==myabs(y))&&(a[i]>a[j])){
    long long t;
    t=a[i];
                a[i]=a[j];
                a[j]=t;
   }
    }


    for(int i=0;i<n;i++)
  printf("%lld\n",a[i]);
    return 0;
}