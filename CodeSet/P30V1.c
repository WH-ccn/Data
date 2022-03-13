#include <stdio.h>
#include <stdlib.h>

long long jdz(long long x){
    if(x>0){
        return x;
    }
    else if(x<0){
        return -x;
    }
    return 0;
}
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    long long a[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=1;i<=n-1;i++){
        for(j=1;j<n;j++){
        if((jdz(a[j-1]-m))>(jdz(a[j]-m))){
            long long temp;
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        else if(((jdz(a[j-1]-m))==(jdz(a[j]-m)))&&(a[j-1]>a[j])){
            long long temp;
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        }
    }
    for(i=0;i<n-1;i++){
        printf("%lld\n",a[i]);
    }
    printf("%lld",a[n-1]);
}