#include<stdio.h>
#include<stdlib.h>
long long jd(long long x)
{
    if(x<0)
        x=-x;
    return x;
}



int xxx(long long n,long long m)
{


    long long i,j,a[1050],hold;

    long long mid1,mid2;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            mid1=a[j]-m;
            mid2=a[j+1]-m;
            if(mid1<0) mid1=(-1)*mid1;
            if(mid2<0) mid2=(-1)*mid2;


            if(mid1>mid2)
            {
                hold=a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
            }
            else if(mid1=mid2 && a[j]>a[j+1])
            {
                hold=a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
            }

        }
    }
      for(i=0;i<n;i++)
      {
          printf("%lld\n",a[i]);
      }
}


int main()
{
    long long n,m;

    scanf("%lld%lld",&n,&m);

    xxx(n,m);

    return 0;
}