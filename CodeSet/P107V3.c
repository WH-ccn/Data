#include <stdio.h>
#include <stdlib.h>
void supbubble(int a[],int n,int m);
long long jdz(long long x)
{
    if (x<0) return -x;
    else return x;
}
int main()
{
    int n,m,i;
    int a[1001]={0};
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    supbubble(a,n,m);
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
void supbubble(int a[],int n,int m)
{
    int i, j, hold;
    for(i = 0; i < n-1; i++)
    {
        for( j = 0; j < n-1-i; j++)
        if(jdz(a[j]-m) > (jdz(a[j+1]-m)))
        {
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
        }
        else if((jdz(a[j]-m))==(jdz(a[j+1]-m)))
        {
            if(a[j]>a[j+1])
            {
            hold = a[j];
            a[j] = a[j+1];
            a[j+1] = hold;
            }
        }


}
}