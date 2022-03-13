#include<stdio.h>
#include<stdlib.h>
long long a[1002] = {0};
long long b[1002] = {0};
long long abc(long long, int);
void bubble(long long [], long long [], int);

int main()
{
    int n, m, k, t;
    long long x;
    scanf("%d %d", &n, &m);
    for(k = 0; k < n; k ++)
    {
        scanf("%lld",&x);
        a[k] = abc(x, m);
        b[k] = x;
    }
    bubble(a,b,n);
    for(t = 0; t < n; t ++)
        printf("%lld\n", b[t]);
    return 0;
}
long long abc(long long x, int m)
{
    long long p, q;
    p = x - m;
    q = m - x;
    if(x >= m)
        return p;
    else
        return q;
}
void bubble(long long a[], long long b[], int n)
{
    int i, j, flag;
    long long hold2, hold1;
    for (i = 0; i < n-1; i++)
    {
        flag = 0;
        for (j = 0; j < n-1-i; j++)
        {
            if((a[j] > a[j + 1]) || (a[j] == a[j + 1] && b[j] > b[j + 1]))
            {
                hold1 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = hold1;
                hold2 = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold2;
                flag = 1;
            }
        }
        if (0 == flag)
        break;
    }
}