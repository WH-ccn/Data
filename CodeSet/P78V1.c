#include <stdio.h>

int a[1001] = {0};
long long b[1001] = {0};

long long quzheng(long long m)
{
    if(m >= 0)
        return m;
    else return -1 * m;
}

int main()
{
    int n, j, i = 1, temp2;
    long long m, temp1;
    scanf("%d%lld", &n, &m);
    for(; i <= n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = quzheng(a[i] - m);
    }
    for(i = 1; i <= n; i++)
    {
        for (j = n; j >= i + 1; j--)
        {
            if(b[j - 1] > b[j])
            {
                temp1 = b[j];
                b[j] = b[j - 1];
                b[j - 1] = temp1;
                temp2 = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp2;
                //printf("a\n");
            }
            else if((b[j - 1] == b[j]) && (a[j - 1] > a[j]))
            {
                temp2 = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp2;
                //printf("b\n");
            }
            //printf("c\n");
        }
        //printf("d\n");
    }
    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}