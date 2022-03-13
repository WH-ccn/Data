#include <stdio.h>
#include <stdlib.h>
long long int dabs(long long int n);
int main()
{
    long long int a,b,num[1000],re[1000],temp,t;
    scanf("%lld%lld",&a,&b);
    for(int i=0;i<a;i++)
    {
        scanf("%lld",&num[i]);
        re[i]=num[i];
        num[i]=dabs(num[i]-b);
    //    printf("%lld\n",num[i]);
    }
    for(int j=0;j<a-1;j++)
    {
        for(int i=0;i<a-j-1;i++)
        {
            if(num[i]>num[i+1])
            {
                temp=num[i];
                num[i]=num[i+1];
                num[i+1]=temp;
                t=re[i];
                re[i]=re[i+1];
                re[i+1]=t;

            }
        }
    }
    printf("%lld",re[0]);
    for(int i=1;i<a;i++)
        printf(" %lld",re[i]);
    return 0;
}
long long int dabs(long long int n)
{
    if(n>=0)
        return n;
    else
        return -n;
}