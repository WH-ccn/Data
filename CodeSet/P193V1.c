#include <stdio.h>
long long s_abs(long long x);
int main(void)
{
    long long arr[1005],abarr[1005],temp,m;
    int i,j,n;
    scanf("%d%lld",&n,&m);
    for (i=0;i<n;i++)
        scanf("%lld",&arr[i]);
    for (i=0;i<n;i++)
        abarr[i]=s_abs(arr[i]-m);
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            if (abarr[j]<abarr[i] || (abarr[j]==abarr[i] && arr[j]<arr[i]))
            {
                temp=abarr[i];
                abarr[i]=abarr[j];
                abarr[j]=temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
        printf("%lld\n",arr[i]);

    return 0;
}
long long s_abs(long long x)
{
    if (x<0)
        x=-x;
    return x;
}