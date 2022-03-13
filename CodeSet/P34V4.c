#include<stdio.h>
#include<stdlib.h>
int a[1010];
int woabs(long long a);
void bubbleSort(int a[], int n,int b);
int main()
{
    int n,zhao,i=0;
    scanf("%d%d",&n,&zhao);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    bubbleSort(a,n,zhao);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
void bubbleSort(int a[], int n,int b) {
 int i, j, flag;
 int hold;
    for(i = 0; i < n-1; i++){
      flag = 0;
    for( j = 0; j < n-1-i; j++)
         if(woabs(a[j]-b) > woabs(a[j+1]-b)){
           hold = a[j];
           a[j] = a[j+1];
           a[j+1] = hold;
            flag = 1;
               }
   if (0 == flag)
   break;
   }
}
int woabs(long long a)
{
    if(a<0)
    {
        a=-a;
    }
    return a;
}