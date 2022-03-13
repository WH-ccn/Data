#include <stdio.h>

void selectSort(long long x[],long long y[],long long n);
long long max(long long x[],long long n);
long long abs(long long a,long long b);

int main()
{
    long long x[1000],y[1000],temp,m,n,i;

    scanf("%ld %ld",&n,&m);

    for(i=0;i<n;i++)
    {
        scanf("%ld",&x[i]);
        y[i]=abs(x[i],m);
    }

    selectSort(x,y,n);

    for(i=0;i<n;i++)
    {
        if(y[i]==y[i+1])
        {
            if(x[i]>x[i+1])
            {
                temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%ld\n",x[i]);
    }
    return 0;
}

void selectSort(long long x[],long long y[],long long n)
{
    long long i,j,temp;

    for(i=n;i>1;i--)
    {
        j=max(y,i);

        temp=x[j];
        x[j]=x[i-1];
        x[i-1]=temp;

        temp=y[j];
        y[j]=y[i-1];
        y[i-1]=temp;
    }
}

long long max(long long x[],long long n)
{
    int i,j=0;

    for(i=1;i<n;i++)
    {
        if(x[i]>x[j])
            j=i;
    }
    return j;
}

long long abs(long long a,long long b)
{
    if(a-b>0)
        return a-b;
    else
        return b-a;
}