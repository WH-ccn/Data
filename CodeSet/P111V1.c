#include<stdio.h>
void bubbleSort(int a[],int n,int m);
long long long_long_abs(long long x);
int main()
{
    int n,m,a[1005];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n,m);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    system("pause");
    return 0;
}
void bubbleSort(int a[], int n,int m)
{
    int i, j, hold, flag;
    for( i = 0; i < n-1; i++)
    {
        flag = 0;
        for(j = 0; j < n-1-i; j++)
        if(long_long_abs(a[j]-m)>long_long_abs(a[j+1]-m))
        {
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
            flag = 1;
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