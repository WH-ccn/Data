#include <stdio.h>
#include <stdlib.h>

void selectSort(int x[], int n,int y[]);
int max(int x[], int n);

int main()
{
    int n,m,i,temp;
    int a[1000],b[1000];

    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        b[i]=abs(a[i]-m);
    }

    selectSort(b,n,a);

    for(i=0;i<n;i++)
    {
        if(b[i]==b[i+1])
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

void selectSort(int x[], int n, int y[]) {
int i, j, temp;
for(i = n; i>1; i--) {
j = max(x, i);
temp = y[j];
y[j] = y[i-1];
y[i-1] = temp;
temp = x[j];
x[j] = x[i-1];
x[i-1] = temp;
}

}
int max(int x[], int n) {
int i, j=0;
for(i=1; i<n; i++)
if(x[i] > x[j]) j = i;
return j;
}