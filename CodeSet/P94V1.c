#include<stdio.h>
#include<stdlib.h>
int a[1050],hold;

int xxx(int n,int m)
{
    int i,j,abs1,abs2;

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            abs1=abs(a[j]-m);
            abs2=abs(a[j+1]-m);
            if(abs1>abs2)
            {
                hold=a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
            }
        }
      }
      for(i=0;i<n;i++)
      {
          printf("%d\n",a[i]);
      }
}



int main()
{
    int n,m;

    scanf("%d%d",&n,&m);

    xxx(n,m);




    return 0;
}