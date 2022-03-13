#include <stdio.h>
#include <stdlib.h>
void paixu(unsigned long long [],long long [],int);
unsigned long long jueduizhi(long long);
int main()
{
   long long n,m;
   int i=0,g=0;
   long long x[1009];
   unsigned long long y[1009];
   scanf("%lld%lld",&n,&m);
   while(i<n)
   {
       scanf("%lld",&x[i]);
       y[i]=jueduizhi((x[i]-m));
       i=i+1;
   }
   paixu(y,x,n);
    while(g<n)
    {
        printf("%lld\n",x[g]);
        g=g+1;
    }
    return 0;
}

void paixu(unsigned long long a[],long long a1[],int b)
{
    int j,k,flag;
    unsigned long long hold;
    long long hold2;
    for(j=0;j<b-1;j++)
    {
        flag=0;
        for(k=0;k<b-1-j;k++)
        {
            if (a[k]>=a[k+1])
            {
                if (a[k]>a[k+1])
                {


                hold=a[k];
                a[k]=a[k+1];
                a[k+1]=hold;
                 hold2=a1[k];
                a1[k]=a1[k+1];
                a1[k+1]=hold2;
                flag=1;
                }
                else
                {
                    if(a1[k]>=a1[k+1])
                    {
                        hold2=a1[k];
                a1[k]=a1[k+1];
                a1[k+1]=hold2;
                    }

                }
            }


        }
            if(flag==0)
                break;
    }

}


unsigned long long jueduizhi(long long u)
{
    if (u>=0)
    {
        return  u;
    }
    else
    {
        return -u;
    }
}