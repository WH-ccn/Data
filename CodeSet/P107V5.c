#include <stdio.h>
#include <stdlib.h>
void supbubble(long long a[],long long n,long long m);
long long jdz(long long x)
{
    if (x<0) return -x;
    else return x;
}
int main()
{
    long long n,m,i;
    long long a[1001]={0};
    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    supbubble(a,n,m);
    for(i=0;i<n;i++)
        printf("%lld\n",a[i]);
    return 0;
}
void supbubble(long long a[],long long n,long long m)
{
    long long i, j, hold;
    for(i = 0; i < n-1; i++)
    {
        for( j = 0; j < n-1-i; j++)
        {if(jdz(a[j]-m) > (jdz(a[j+1]-m)))
        {
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
        }
        else if((jdz(a[j]-m))==(jdz(a[j+1]-m)))
        {
            if(a[j]>a[j+1])
            {
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
            }
        }
        }


}
}