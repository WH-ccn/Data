#include<stdio.h>
long long a[1005];
long long l_abs(long long num)
{
    if(num<0) num=-num;
    return num;
}
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
       int flag=0;
       for(j=0;j<n-i-1;j++)
       {
           long long dis1=l_abs(a[j]-m);
           long long dis2=l_abs(a[j+1]-m);
           if((dis1>dis2)||(dis1==dis2&&a[j]>a[j+1]))
           {
               flag=1;
               long long temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;

           }

       }
        if(flag==0)
            break;
    }
    for(i=0;i<n;i++)
    {
        printf("%lld\n",a[i]);
    }
    return 0;

}