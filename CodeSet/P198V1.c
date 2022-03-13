#include <stdio.h>
#include <stdlib.h>

int cmp(const void *p1,const void *p2);

long data[1050][2];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {   long temp;
        scanf("%ld",&temp);
        data[i][0] = temp;
        long ans = labs(temp-m);
        data[i][1] = ans;
    }
    qsort(data,n,sizeof(data[0]),cmp);
    for(int i=0;i<n;i++)
    {
        printf("%ld\n",data[i][0]);
    }
}

int cmp(const void *p1,const void *p2)
{
    long *c = (long *)p1;
    long *d = (long *)p2;
    if(c[1]<d[1])
    {
        return -1;
    }
    else if(c[1]>d[1])
    {
        return 1;
    }
    else
    {
        if(c[0]>d[0])
        {
            return 1;
        }
        else if(c[0]<d[0])
        {
            return -1;
        }
        else
        return 0;
    }
}