#include<stdio.h>
void bubbleSort(long long a[],int n,int m);
long long long_long_abs(long long x);
int main()
{
    int n,m;
    long long a[1005];
    scanf("%d %d",&n,&m);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    printf("\n");
    bubbleSort(a,n,m);
    for(int i=0;i<n;i++)
    {
        printf("%lld\n",a[i]);
    }
    system("pause");
    return 0;
}
void bubbleSort(long long a[], int n,int m)
{
    int i, j, hold1, hold2, flag;
    for( i = 0; i < n-1; i++)
    {
        flag = 0;
        for(j = 0; j < n-1-i; j++)
        if(long_long_abs(a[j]-m)>long_long_abs(a[j+1]-m))
        {
            hold1 = a[j];
            a[j] = a[j+1];
            a[j+1] = hold1;
            flag = 1;
        }
        if(long_long_abs(a[j]-m)==long_long_abs(a[j+1]-m))
        {
            if(a[j]>a[j+1])
            {
                hold2 = a[j];
                a[j] = a[j+1];
                a[j+1] = hold2;
                flag = 1;
            }
        }
        if (flag == 0)
        break;
    }
}
long long long_long_abs(long long x)
{
    if(x<0)
        return -1*x;
    else
        return x;
}