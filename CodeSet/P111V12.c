#include<stdio.h>
#include<stdlib.h>
int n,m;
#define ll long long
ll absll(ll x)
{
    if(x>0) return x;
    if(x<=0) return -x;
}
int r_cmp(const void *p1,const void *p2)
{
    ll pp1=*(int*)p1;
    ll pp2=*(int*)p2;
    if(absll(pp1-m)>absll(pp2-m)) return 1;
    if(absll(pp1-m)<absll(pp2-m)) return -1;
    if(absll(pp1-m)==absll(pp2-m))
    {
        if(pp1>pp2) return 1;
        if(pp1<pp2) return -1;
        if(pp1==pp2) return 0;
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    int a[1005];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),r_cmp);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    system("pause");
    return 0;
}