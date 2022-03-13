#include <stdio.h>
#include <math.h>
long long a[1001];
//全局变量
long long llabs(long long a)
{
    if (a < 0)
    return -a;
    else 
    return a;
}
void sort(long long a[], int n, int m)
{
    int i, j;
    double tem;
    for(i = 0; i < n -1; i++)
    for(j = 0; j < n -1 - i; j++)
    {
        if (llabs(a[j] - m) > llabs(a[j + 1] - m) || (llabs(a[j] - m) == llabs(a[j + 1] - m) ) && a[j] > a[j + 1])
        {
            tem = a[j];
            a[j] = a[j + 1];
            a[j+1] = tem;
        }
    }
}

int main()
{
    int n, m, i;

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        scanf("%lld", a + i);
    sort(a, n, m);
    for(i = 0; i < n; i++)
        printf("%lld\n", a[i]);

    return 0;
}