#include<stdio.h>
#include<stdlib.h>
long long a[1001] = {0};
int b[1001] = {0};
long long abc(int, int);
void bubble(long long [], int [], int);

int main()
{
    int n, m, x, k;
    scanf("%d %d", &n, &m);
    for(k = 0; k < n; k ++)
    {
        scanf("%d",&x);
        a[k] = abc(x, m);
        b[k] = x;
    }
    bubble(a,b,n);
    for(k = 0; k < n; k ++)
    {
        printf("%d\n", b[k]);
    }
    return 0;
}
long long abc(int x, int m)
{
    long long p, q;
    p = x - m;
    q = m - x;
    if(x >= m)
        return p;
    else
        return q;
}
void bubble(long long a[], int b[], int n)
{
    int i, j, hold1, flag;
    long long hold2;
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