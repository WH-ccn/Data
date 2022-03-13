#include <stdio.h>
#include <stdlib.h>
void bubble(double a[], int n)
{
 int i,j, flag;
 double hold;
 for(i=0; i< n-1; i++)
 { flag =0;
  for (j=0;j<n-1-i; j++)
  {
   if(a[j]>a[j+1])
   {
    hold= a[j];
    a[j]=a[j+1];
    a[j+1]=hold;
    flag=1;
   }
 
  }
 if (flag==0) break;
  
 }
}
int main()
{
 int m,j;
 double b[1005];
 scanf("%d", &m);
 
 for(j=0;j<m;j++)
 scanf("%lf",&b[j]);
 bubble(b,m);
 
 for(j=0;j<m;j++)
 printf("%.5lf\n",b[j]);
 return 0;
}