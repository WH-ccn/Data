#include<stdio.h>
int main()
{
    long long n,i,j,m,a[1010],hold;
    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(abs(a[j]-m)>abs(a[j+1]-m))
            {
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
            }
             if(abs(a[j]-m)==abs(a[j+1]-m))
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
    for(i=0;i<n;i++)
    {
        printf("%lld\n",a[i]);
    }
}
long long abs(long long x)
{
    if(x>=0)
        return x;
    else
        return -x;
}